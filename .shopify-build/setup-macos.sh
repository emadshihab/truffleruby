#!/bin/bash

set -x
set -e

# Install dependencies for tests - we'll just install all in all cases at the moment
brew install libxml2 libxslt memcached pkgconfig sqlite3
