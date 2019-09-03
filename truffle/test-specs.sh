#!/bin/bash

set -x
set -e

source truffle/test-common.sh

ruby spec/mspec/bin/mspec --config spec/truffle.mspec --excl-tag fails --excl-tag graalvm --excl-tag aot spec/truffle/identity_spec.rb
