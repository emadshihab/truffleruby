# Compatibility

TruffleRuby aims to be fully compatible with the standard implementation of
Ruby, MRI, version 2.6.2, revision 67232.

Any incompatibility with MRI is considered a bug, except for rare cases detailed below.
If you find an incompatibility with MRI, please [report](https://github.com/oracle/truffleruby/issues) it to us.

Our policy is to match the behaviour of MRI, except where we do not know how to
do so with good performance for typical Ruby programs. Some features work but
will have very low performance whenever they are used and we advise against
using them on TruffleRuby if you can. Some features are missing entirely and may
never be implemented. In a few limited cases, we are deliberately incompatible
with MRI in order to provide a greater capability.

In general, we are not looking to debate whether Ruby features are good, bad, or
if we could design the language better. If we can support a feature, we will do.

In the future, we aim to provide compatibility with extra functionality provided
by JRuby, but at the moment we do not.

## Identification

TruffleReport defines these constants for identification:

- `RUBY_ENGINE` is `'truffleruby'`
- `RUBY_VERSION` is the compatible MRI version
- `RUBY_REVISION` is the compatible MRI version revision
- `RUBY_PATCHLEVEL` is always zero
- `RUBY_RELEASE_DATE` is the Git commit date
- `RUBY_ENGINE_VERSION` is the GraalVM version, or `0.0-` and the Git commit hash if your build is not part of a GraalVM release.

Additionally, TruffleRuby defines:

- `TruffleRuby.revision` which is the Git commit hash

In the C API, we define a preprocessor macro `TRUFFLERUBY`.

## Features entirely missing

#### Continuations and `callcc`

Continuations and `callcc` are unlikely to ever be implemented in TruffleRuby,
as their semantics fundamentally do not match the technology that we are using.

#### Fork

You cannot `fork` the TruffleRuby interpreter. The feature is unlikely to ever
be supported when running on the JVM but could be supported in the future in
the native configuration. The correct and portable way to test if `fork` is
available is:

```ruby
Process.respond_to?(:fork)
```

#### Standard libraries

The following standard libraries are unsupported.

* `continuation`
* `dbm`
* `gdbm`
* `sdbm`
* `debug` (could be implemented in the future, use [`--inspect`](tools.md) instead)
* `profile` (could be implemented in the future, use [`--cpusampler`](tools.md) instead)
* `profiler` (could be implemented in the future, use [`--cpusampler`](tools.md) instead)
* `io/console` (partially implemented, could be implemented in the future)
* `io/wait` (partially implemented, could be implemented in the future)
* `pty` (could be implemented in the future)
* `win32`
* `win32ole`

We provide our own included implementation of the interface of the `ffi` gem,
like JRuby and Rubinius. The implementation should be fairly complete and passes
all the specs of the `ffi` gem except for some rarely-used corner cases.

#### Safe levels

`$SAFE` and `Thread#safe_level` are `0` and no other levels are implemented.
Trying to use level `1` will raise a `SecurityError`. Other levels will raise
`ArgumentError` as in standard Ruby. See our [security notes](security.md) for
more explanation on this.

#### Internal MRI functionality

`RubyVM` is not intended for users and is not implemented.

#### RDoc HTML generation

TruffleRuby does not include the Darkfish theme for RDoc.

## Features with major differences

#### Threads run in parallel

In MRI, threads are scheduled concurrently but not in parallel. In TruffleRuby
threads are scheduled in parallel. As in JRuby and Rubinius, you are responsible
for correctly synchronising access to your own shared mutable data structures,
and we will be responsible for correctly synchronising the state of the
interpreter.

#### Threads detect interrupts at different points

TruffleRuby threads may detect that they have been interrupted at different
points in the program to where it would on MRI. In general, TruffleRuby seems
to detect an interrupt sooner than MRI. JRuby and Rubinius are also different
to MRI, the behaviour isn't documented in MRI, and it's likely to change
between MRI versions, so we would not recommend depending on interrupt points
at all.

#### Fibers do not have the same performance characteristics as in MRI

Most use cases of fibers rely on them being easy and cheap to start up and
having low memory overheads. In TruffleRuby we implement fibers using operating
system threads, so they have the same performance characteristics as Ruby
threads. As with coroutines and continuations, a conventional implementation
of fibers fundamentally isn't compatible with the execution model we are
currently using.

#### Some classes marked as internal will be different

MRI provides some classes that are described in the documentation as being only
available on MRI (C Ruby). We implement these classes if it's practical to do
so, but this isn't always the case. For example `RubyVM` is not available.

## Features with subtle differences

#### Command line switches

`-y`, `--yydebug`, `--dump=`, `--debug-frozen-string-literal` are ignored with
a warning as they are unsupported development tools.

Programs passed in `-e` arguments with magic-comments must have an encoding that
is UTF-8 or a subset of UTF-8, as the JVM has already decoded arguments by the
time we get them.

`--jit` options and the `jit` feature are not supported because TruffleRuby
uses Graal as a JIT.

#### Time is limited to millisecond precision

Ruby normally provides microsecond (millionths of a second) clock precision,
but TruffleRuby is currently limited to millisecond (thousands of a second)
precision. This applies to `Time.now` and
`Process.clock_gettime(Process::CLOCK_REALTIME)`.

#### Strings have a maximum bytesize of 2<sup>31</sup>-1

Ruby Strings are represented as a Java `byte[]`. The JVM enforces a maximum
array size of 2<sup>31</sup>-1 (by storing the size in a 32-bit signed `int`),
and therefore Ruby Strings cannot be longer than 2<sup>31</sup>-1 bytes. That
is, Strings must be smaller than 2GB. This is the same restriction as JRuby. We
could try to workaround by using native strings, but this would be a large
effort to support every Ruby String operation on native strings.

#### Setting the process title doesn't always work

Setting the process title (via `$0` or `Process.setproctitle` in Ruby) is done
as best-effort. It may not work, or the title you try to set may be truncated.

#### Line numbers other than 1 work differently

In an `eval` where a custom line number can be specified, line numbers below 1
are treated as 1, and line numbers above 1 are implemented by inserting blank
lines in front of the source before parsing it.

The `erb` standard library has been modified to not use negative line numbers.

#### Polyglot standard IO streams

If you use standard IO streams provided by the Polyglot engine, via the
experimental `--polyglot-stdio` option, reads and writes to file descriptors 1,
2 and 3 will be redirected to these streams. That means that other IO
operations on these file descriptors, such as `isatty` may not be relevant for
where these streams actually end up, and operations like `dup` may lose the
connection to the polyglot stream. For example, if you `$stdout.reopen`, as
some logging frameworks do, you will get the native standard-out, not the
polyglot out.

Also, IO buffer drains, writes on IO objects with `sync` set, and
`write_nonblock`, will not retry the write on `EAGAIN` and `EWOULDBLOCK`, as the
streams do not provide a way to detect this.

#### Error messages

Error message strings will sometimes differ from MRI, as these are not generally
covered by the Ruby Specification suite or tests.

#### Signals

The set of signals that TruffleRuby can handle is different from MRI. When
launched as a GraalVM Native Image, TruffleRuby allows trapping all the same
signals that MRI does, as well as a few that MRI doesn't. The only signals
that can't be trapped are `KILL`, `STOP`, and `VTALRM`. Consequently, any
signal handling code that runs on MRI can run on TruffleRuby without modification
in the GraalVM Native Image.

However, when run on the JVM, TruffleRuby is unable to trap `USR1` or `QUIT`,
as these are reserved by the JVM itself. Any code that relies on being able to
trap those signals will need to fallover to another available signal. Additionally,
`FPE`, `ILL`, `KILL`, `SEGV`, `STOP`, and `VTALRM` cannot be trapped, but these
signals are also unavailable on MRI.

When TruffleRuby is run as part of a polyglot application, any signals that are
handled by another language become unavailable for TruffleRuby to trap.

## Features with very low performance

#### `ObjectSpace`

Using most methods on `ObjectSpace` will temporarily lower the performance of
your program. Using them in test cases and other similar 'offline' operations is
fine, but you probably don't want to use them in the inner loop of your
production application.

#### `set_trace_func`

Using `set_trace_func` will temporarily lower the performance of your program.
As with `ObjectSpace`, we would recommend that you do not use this in the inner
loop of your production application.

#### Backtraces

Throwing exceptions, and other operations which need to create a backtrace, are
slower than on MRI. This is because we have to undo optimizations that we have
applied to run your Ruby code fast in order to recreate the backtrace entries.
We wouldn't recommend using exceptions for control flow on any implementation of
Ruby anyway.

To help alleviate this problem in some cases backtraces are automatically
disabled where we dynamically detect that they probably won't be used. See the
experimental `--backtraces-omit-unused` option.

## C Extension Compatibility

#### `VALUE` is a pointer

In TruffleRuby `VALUE` is a pointer type (`void *`) rather than a
integer type (`long`). This means that `switch` statements cannot be
done using a raw `VALUE` as they can with MRI. You can normally
replace any `switch` statement with `if` statements with little
difficulty if required.

#### Identifiers may be macros or functions

Identifiers which are normally macros may be functions, functions may be macros,
and global variables may be macros. This may cause problems where they are used
in a context which relies on a particular implementation (e.g., taking the
address of it, assigning to a function pointer variable and using defined() to
check if a macro exists). These issues should all be considered bugs and be
fixed, please report these cases.

#### `rb_scan_args`

`rb_scan_args` only supports up to ten pointers.

#### `RDATA`

The `mark` function of `RDATA` and `RTYPEDDATA` is not called during
garbage collection. Instead we simulate this by caching information
about objects as they are assigned to structs, and periodically run
all mark functions when the cache has become full to represent those
object relationships in a way that the our garbage collector will
understand. The process should behave identically to MRI.

## Compatibility with JRuby

#### Ruby to Java interop

TruffleRuby does not support the same interop to Java interface as JRuby does.
We provide [an alternate polyglot API](polyglot.md) for interoperating with
multiple languages, including Java, instead.

#### Java to Ruby interop

Calling Ruby code from Java is supported by the
[GraalVM polyglot API](http://www.graalvm.org/truffle/javadoc/org/graalvm/polyglot/package-summary.html).

#### Java extensions

Use Java extensions written for JRuby is not supported. We could apply the same
techniques as we have developed to run C extensions to this problem, but it's
not clear if this will ever be a priority.

## Compatibility with Rubinius

We do not have any plans at the moment to provide support for Rubinius'
extensions to Ruby.

## Features not yet supported in native configuration

* Java interop

Running TruffleRuby in the native configuration is mostly the same as running
on the JVM. There are differences in resource management, as both VMs use
different garbage collectors. But, functionality-wise, they are essentially on
par with one another. The big difference is support for Java interop, which
currently relies on reflection. TruffleRuby's implementation of Java interop
does not work with the GraalVM Native Image Generator's limited support for
runtime reflection.

## Spec Completeness

'How many specs are there?' is not a question with an easy precise answer. The
number of specs varies for different versions of the Ruby language, different
platforms, different versions of the specs, and different configurations of
the specs. The specs for the standard library and C extension API are also
very uneven and they so can give misleading results.

For the command line interface, the language, and the core library specs,
which covers the bulk of what TruffleRuby reimplements, this is how many spec
examples TruffleRuby runs successfully compared to our compatible version of
MRI running the version of specs from TruffleRuby:

<!--
  For example `jt test :language` in TruffleRuby and `make test-spec MSPECOPT=:language`
  in MRI, having copied our specs over theirs.
-->

* Command line 112 / 136, **82%**
* Language 2270 / 2332, **97%**
* Core library 19453 / 20644, **94%**
