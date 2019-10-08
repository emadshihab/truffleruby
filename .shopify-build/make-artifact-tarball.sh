#!/bin/bash
set -xeuo pipefail

package_dir="truffleruby-shopify-$(dist/bin/ruby -e 'puts TruffleRuby.revision')"
ln -s dist "$package_dir"
tar -czf "$package_dir".tar "$package_dir"/*
mv "$package_dir".tar .shopify-build/artifacts
