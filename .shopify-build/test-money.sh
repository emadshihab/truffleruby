#!/bin/bash

source .shopify-build/test-common.sh

git clone git@github.com:Shopify/money.git
pushd money
git apply ../.shopify-build/money.patch
bundle install
bundle exec rake
popd
