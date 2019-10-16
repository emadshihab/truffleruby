#!/bin/bash

set -ex

dist_path="${PWD}/dist"
version="truffleruby-shopify-$(dist/bin/ruby -e 'puts TruffleRuby.revision')"
mkdir rubies
cd "${dist_path}"
tar -czf "../rubies/${version}.tar.gz" $(ls)
