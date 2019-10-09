#!/bin/bash

ci_step "Installing Homebrew packages"
# Install TruffleRuby dependencies
brew install openssl

# Install dependencies for tests - we'll just install all in all cases at the moment
brew install cmake libxml2 libxslt memcached pkgconfig snappy sqlite3
