/*
 * Copyright (c) 2018, 2019 Oracle and/or its affiliates. All rights reserved. This
 * code is released under a tri EPL/GPL/LGPL license. You can use it,
 * redistribute it and/or modify it under the terms of the:
 *
 * Eclipse Public License version 2.0, or
 * GNU General Public License version 2, or
 * GNU Lesser General Public License version 2.1.
 */
package org.truffleruby.cext;

import java.lang.ref.WeakReference;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

import org.truffleruby.RubyContext;
import org.truffleruby.RubyLanguage;
import org.truffleruby.cext.ValueWrapperManagerFactory.AllocateHandleNodeGen;
import org.truffleruby.cext.ValueWrapperManagerFactory.GetHandleBlockHolderNodeGen;
import org.truffleruby.language.NotProvided;
import org.truffleruby.language.RubyBaseWithoutContextNode;

import com.oracle.truffle.api.CompilerDirectives.TruffleBoundary;
import com.oracle.truffle.api.dsl.Cached;
import com.oracle.truffle.api.dsl.CachedContext;
import com.oracle.truffle.api.dsl.GenerateUncached;
import com.oracle.truffle.api.dsl.Specialization;
import com.oracle.truffle.api.interop.InteropLibrary;
import com.oracle.truffle.api.interop.TruffleObject;
import com.oracle.truffle.api.library.ExportLibrary;
import com.oracle.truffle.api.library.ExportMessage;

public class ValueWrapperManager {

    static final long UNSET_HANDLE = -2L;
    static final HandleBlockAllocator allocator = new HandleBlockAllocator();

    /*
     * These constants are taken from ruby.h, and are based on us not tagging doubles.
     */

    public static final int FALSE_HANDLE = 0b000;
    public static final int TRUE_HANDLE = 0b010;
    public static final int NIL_HANDLE = 0b100;
    public static final int UNDEF_HANDLE = 0b110;

    public static final long LONG_TAG = 1;
    public static final long OBJECT_TAG = 0;

    public static final long MIN_FIXNUM_VALUE = -(1L << 62);
    public static final long MAX_FIXNUM_VALUE = (1L << 62) - 1;

    public static final long TAG_MASK = 0b111;
    public static final long TAG_BITS = 3;

    public final ValueWrapper trueWrapper = new ValueWrapper(true, TRUE_HANDLE, null);
    public final ValueWrapper falseWrapper = new ValueWrapper(false, FALSE_HANDLE, null);
    public final ValueWrapper undefWrapper = new ValueWrapper(NotProvided.INSTANCE, UNDEF_HANDLE, null);
    public final ValueWrapper nilWrapper;

    private Object[] blockMap = new Object[0];

    private final ThreadLocal<HandleThreadData> threadBlocks;

    private final RubyContext context;

    public ValueWrapperManager(RubyContext context) {
        this.context = context;
        this.threadBlocks = ThreadLocal.withInitial((this::makeThreadData));
        nilWrapper = new ValueWrapper(context.getCoreLibrary().nil, NIL_HANDLE, null);
    }

    public HandleThreadData makeThreadData() {
        HandleThreadData threadData = new HandleThreadData();
        HandleBlockHolder holder = threadData.holder;
        context.getFinalizationService().addFinalizer(
                threadData,
                null,
                ValueWrapperManager.class,
                () -> context.getMarkingService().queueForMarking(holder.handleBlock),
                null);
        return threadData;
    }

    @TruffleBoundary
    public HandleThreadData getBlockHolder() {
        return threadBlocks.get();
    }

    /*
     * We keep a map of long wrappers that have been generated because various C extensions assume
     * that any given fixnum will translate to a given VALUE.
     */
    public ValueWrapper longWrapper(long value) {
        return new ValueWrapper(value, UNSET_HANDLE, null);
    }

    public ValueWrapper doubleWrapper(double value) {
        return new ValueWrapper(value, UNSET_HANDLE, null);
    }

    @TruffleBoundary
    public synchronized void addToBlockMap(HandleBlock block) {
        int blockIndex = block.getIndex();
        long blockBase = block.getBase();
        Object[] map = blockMap;
        HandleBlockAllocator allocator = ValueWrapperManager.allocator;
        map = ensureCapacity(map, blockIndex + 1);
        map[blockIndex] = new WeakReference<>(block);
        blockMap = map;
        context.getFinalizationService().addFinalizer(block, null, ValueWrapperManager.class, () -> {
            this.blockMap[blockIndex] = null;
            allocator.addFreeBlock(blockBase);
        }, null);
    }

    private Object[] ensureCapacity(Object[] map, int size) {
        if (size > map.length) {
            Object[] newMap = new Object[size];
            if (map.length > 0) {
                System.arraycopy(map, 0, newMap, 0, size - 1);
            }
            map = newMap;
        }
        return map;
    }

    public synchronized Object getFromHandleMap(long handle) {
        ValueWrapper wrapper = getWrapperFromHandleMap(handle);
        if (wrapper == null) {
            return null;
        }
        return wrapper.getObject();
    }

    @SuppressWarnings("unchecked")
    public synchronized ValueWrapper getWrapperFromHandleMap(long handle) {
        final int index = HandleBlock.getHandleIndex(handle);
        WeakReference<HandleBlock> ref;
        try {
            ref = (WeakReference<HandleBlock>) blockMap[index];
        } catch (ArrayIndexOutOfBoundsException e) {
            return null;
        }
        if (ref == null) {
            return null;
        }
        HandleBlock block;
        if ((block = ref.get()) == null) {
            return null;
        }
        return block.getWrapper(handle);
    }

    protected static class FreeHandleBlock {
        public final long start;
        public final FreeHandleBlock next;

        public FreeHandleBlock(long start, FreeHandleBlock next) {
            this.start = start;
            this.next = next;
        }
    }

    private static final int BLOCK_BITS = 15;
    private static final int BLOCK_SIZE = 1 << (BLOCK_BITS - TAG_BITS);
    private static final int BLOCK_BYTE_SIZE = BLOCK_SIZE << TAG_BITS;
    private static final long BLOCK_MASK = -1L << BLOCK_BITS;
    private static final long OFFSET_MASK = ~BLOCK_MASK;
    private static final long ALLOCATION_BASE = 0xffffffffL << BLOCK_BITS;

    protected static class HandleBlockAllocator {

        private long nextBlock = ALLOCATION_BASE;
        private FreeHandleBlock firstFreeBlock = null;

        public synchronized long getFreeBlock() {
            if (firstFreeBlock != null) {
                FreeHandleBlock block = firstFreeBlock;
                firstFreeBlock = block.next;
                return block.start;
            } else {
                long block = nextBlock;
                nextBlock = nextBlock + BLOCK_BYTE_SIZE;
                return block;
            }
        }

        public synchronized void addFreeBlock(long blockBase) {
            firstFreeBlock = new FreeHandleBlock(blockBase, firstFreeBlock);
        }
    }

    public static class HandleBlock {

        public static final HandleBlock DUMMY_BLOCK = new HandleBlock(null, 0, null);

        private static final Set<HandleBlock> keepAlive = Collections.newSetFromMap(new ConcurrentHashMap<>());

        private final long base;
        @SuppressWarnings("rawtypes") private final ValueWrapper[] wrappers;
        private int count;

        public HandleBlock(RubyContext context) {
            this(context, allocator.getFreeBlock(), new ValueWrapper[BLOCK_SIZE]);
        }

        private HandleBlock(RubyContext context, long base, ValueWrapper[] wrappers) {
            if (context != null && context.getOptions().CEXTS_KEEP_HANDLES_ALIVE) {
                keepAlive(this);
            }
            this.base = base;
            this.wrappers = wrappers;
            this.count = 0;
        }

        @TruffleBoundary
        private static void keepAlive(HandleBlock block) {
            keepAlive.add(block);
        }

        public long getBase() {
            return base;
        }

        public int getIndex() {
            return (int) ((base - ALLOCATION_BASE) >> BLOCK_BITS);
        }

        public ValueWrapper getWrapper(long handle) {
            int offset = (int) (handle & OFFSET_MASK) >> TAG_BITS;
            return wrappers[offset];
        }

        public boolean isFull() {
            return count == BLOCK_SIZE;
        }

        public long setHandleOnWrapper(ValueWrapper wrapper) {
            long handle = getBase() + count * 8;
            wrapper.setHandle(handle, this);
            wrappers[count] = wrapper;
            count++;
            return handle;
        }

        public static int getHandleIndex(long handle) {
            return (int) ((handle - ALLOCATION_BASE) >> BLOCK_BITS);
        }
    }

    protected static class HandleBlockHolder {
        protected HandleBlock handleBlock = null;
    }

    protected static class HandleThreadData {

        private final HandleBlockHolder holder = new HandleBlockHolder();

        public HandleBlock currentBlock() {
            return holder.handleBlock;
        }

        public HandleBlock makeNewBlock(RubyContext context) {
            return (holder.handleBlock = new HandleBlock(context));
        }
    }

    @GenerateUncached
    public static abstract class GetHandleBlockHolderNode extends RubyBaseWithoutContextNode {

        public abstract HandleThreadData execute(ValueWrapper wrapper);

        @Specialization(guards = "cachedThread == currentJavaThread(wrapper)", limit = "getCacheLimit()")
        protected HandleThreadData getHolderOnKnownThread(ValueWrapper wrapper,
                @CachedContext(RubyLanguage.class) RubyContext context,
                @Cached("currentJavaThread(wrapper)") Thread cachedThread,
                @Cached("getBlockHolder(wrapper, context)") HandleThreadData threadData) {
            return threadData;
        }

        @Specialization(replaces = "getHolderOnKnownThread")
        protected HandleThreadData getBlockHolder(ValueWrapper wrapper,
                @CachedContext(RubyLanguage.class) RubyContext context) {
            return context.getValueWrapperManager().getBlockHolder();
        }

        static protected Thread currentJavaThread(ValueWrapper wrapper) {
            return Thread.currentThread();
        }

        public int getCacheLimit() {
            return 3;
        }

        public static GetHandleBlockHolderNode create() {
            return GetHandleBlockHolderNodeGen.create();
        }
    }

    @GenerateUncached
    public static abstract class AllocateHandleNode extends RubyBaseWithoutContextNode {

        public abstract long execute(ValueWrapper wrapper);

        @Specialization
        protected long allocateHandleOnKnownThread(ValueWrapper wrapper,
                @CachedContext(RubyLanguage.class) RubyContext context,
                @Cached GetHandleBlockHolderNode getBlockHolderNode) {
            HandleThreadData threadData = getBlockHolderNode.execute(wrapper);
            HandleBlock block = threadData.holder.handleBlock;
            if (block == null || block.isFull()) {
                if (block != null) {
                    context.getMarkingService().queueForMarking(block);
                }
                block = threadData.makeNewBlock(context);
                context.getValueWrapperManager().addToBlockMap(block);
            }
            return block.setHandleOnWrapper(wrapper);
        }

        public static AllocateHandleNode create() {
            return AllocateHandleNodeGen.create();
        }
    }

    public static boolean isTaggedLong(long handle) {
        return (handle & LONG_TAG) == LONG_TAG;
    }

    public static boolean isTaggedObject(long handle) {
        return handle != FALSE_HANDLE && (handle & TAG_MASK) == OBJECT_TAG;
    }

    public static boolean isWrapper(Object value) {
        return value instanceof ValueWrapper;
    }

    @ExportLibrary(InteropLibrary.class)
    @GenerateUncached
    public static class UnwrapperFunction implements TruffleObject {

        @ExportMessage
        public boolean isExecutable() {
            return true;
        }

        @ExportMessage
        public Object execute(Object[] arguments,
                @Cached UnwrapNode unwrapNode) {
            return unwrapNode.execute(arguments[0]);
        }
    }

    @ExportLibrary(InteropLibrary.class)
    @GenerateUncached
    public static class WrapperFunction implements TruffleObject {

        @ExportMessage
        public boolean isExecutable() {
            return true;
        }

        @ExportMessage
        public Object execute(Object[] arguments,
                @Cached WrapNode wrapNode) {
            return wrapNode.execute(arguments[0]);
        }
    }
}
