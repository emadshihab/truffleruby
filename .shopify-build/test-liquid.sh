#!/bin/bash

set -x
set -e

source .shopify-build/test-common.sh

git clone git@github.com:Shopify/liquid.git
pushd liquid

gem install minitest -v 5.11.3
rake base_test

popd
