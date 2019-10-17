#!/bin/bash

# Dependencies needed for building TruffleRuby

brew install \
  openssl

# Dependencies only needed for tests

brew install \
  cmake \
  libxml2 \
  libxslt \
  memcached \
  pkgconfig \
  snappy \
  sqlite3
