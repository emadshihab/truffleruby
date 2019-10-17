#!/bin/bash

set -eo pipefail

echo "--- Packaging"
os=$(.shopify-build/build/bin/ruby -e "puts({'darwin' => 'macos'}.fetch(Truffle::System.host_os, &:itself))")
cpu=$(.shopify-build/build/bin/ruby -e "puts({'x86_64' => 'amd64'}.fetch(Truffle::System.host_cpu, &:itself))")
revision=$(.shopify-build/build/bin/ruby -e 'puts TruffleRuby.revision')
name=truffleruby-shopify-$os-$cpu-$revision
mkdir $name
rm -f .shopify-build/build/jre/languages/llvm/native/lib/libc++.dylib
rm -f .shopify-build/build/jre/languages/llvm/native/lib/libc++abi.dylib
cp -r .shopify-build/build/* $name
tar -zcf .shopify-build/artifacts/$name.tar.gz $name
