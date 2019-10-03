#!/bin/bash

source .shopify-build/test-common.sh

git clone git@github.com:Shopify/browser_sniffer.git
pushd browser_sniffer
bundle install
bundle exec rake
popd
