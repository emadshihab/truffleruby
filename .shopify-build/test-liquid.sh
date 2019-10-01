#!/bin/bash

source .shopify-build/test-common.sh

git clone git@github.com:Shopify/liquid.git
pushd liquid
git apply ../.shopify-build/liquid.patch
bundle install
bundle exec rake base_test
popd
