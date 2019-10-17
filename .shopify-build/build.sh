#!/bin/bash

set -eo pipefail

if [[ $(uname) == "Darwin" ]]; then
  source .shopify-build/setup-macos.sh
fi

echo "--- Installing JVMCI"
tool/jt.rb install jvmci

echo "--- Installing mx"
tool/jt.rb mx --version

echo "--- Installing Graal"
tool/jt.rb mx sforceimports

echo "--- Building"
tool/jt.rb build --env shopify

echo "--- Post building"
mv $(tool/jt.rb mx --env shopify graalvm-home)/* .shopify-build/build
.shopify-build/build/bin/ruby --native --version
.shopify-build/build/bin/ruby --jvm --version
cat .shopify-build/build/release
echo
