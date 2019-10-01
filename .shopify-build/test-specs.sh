#!/bin/bash

source .shopify-build/test-common.sh

ruby spec/mspec/bin/mspec --config spec/truffle.mspec --format specdoc --excl-tag fails "$@"
