#!/bin/bash

source .shopify-build/test-common.sh

git clone git@github.com:Shopify/measured.git
pushd measured
bundle install
bundle exec rake
popd
