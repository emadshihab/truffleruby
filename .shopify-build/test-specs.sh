#!/bin/bash

set -eo pipefail

if [[ $(uname) == "Darwin" ]]; then
  source .shopify-build/setup-macos.sh
else
  source .shopify-build/setup-linux.sh
fi

unset GEM_HOME GEM_PATH GEM_ROOT RUBY_ENGINE RUBY_ROOT RUBY_VERSION
PATH=$PWD/.shopify-build/build/bin:$PATH
ruby --version

ruby spec/mspec/bin/mspec --config spec/truffle.mspec --format specdoc --excl-tag fails "$@"
