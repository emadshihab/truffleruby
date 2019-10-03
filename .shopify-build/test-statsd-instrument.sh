#!/bin/bash

source .shopify-build/test-common.sh

git clone git@github.com:Shopify/statsd-instrument.git
pushd statsd-instrument
bundle install
bundle exec rake
popd
