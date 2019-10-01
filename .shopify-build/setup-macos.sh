#!/bin/bash

set -x
set -e

# Install TruffleRuby dependencies
brew install openssl llvm@4

# Install dependencies for tests - we'll just install all in all cases at the moment
brew install libxml2 libxslt pkgconfig sqlite3
