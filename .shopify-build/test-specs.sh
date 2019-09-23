#!/bin/bash

source .shopify-build/test-common.sh

# We'd like to run all specs (remove --excl-tag slow) but can't due
# to https://github.com/oracle/truffleruby/issues/1746

ruby spec/mspec/bin/mspec --config spec/truffle.mspec --excl-tag fails --excl-tag aot --excl-tag slow
