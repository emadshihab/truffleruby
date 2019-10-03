#!/bin/bash

source .shopify-build/test-common.sh

git clone git@github.com:ruby-i18n/i18n.git
pushd i18n
bundle install
bundle exec rake
popd
