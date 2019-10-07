#!/bin/bash

source ".shopify-build/helpers.sh"

if [[ $(uname) == "Darwin" ]]; then
  source ".shopify-build/setup-macos.sh"
fi

# Unset all variables that could be set by a system Ruby which may cause us issues
unset GEM_HOME GEM_PATH GEM_ROOT RUBY_ENGINE RUBY_ROOT RUBY_VERSION

export PATH="${PWD}/dist/bin:${PATH}"

ci_step "Ruby version: $(ruby --version)"
