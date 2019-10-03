#!/bin/bash

source ".shopify-build/setup-truffleruby.sh"

ruby spec/mspec/bin/mspec --config spec/truffle.mspec --format specdoc --excl-tag fails "$@"
