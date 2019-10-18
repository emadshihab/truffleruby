#!/bin/bash

# Dependencies needed for building TruffleRuby

brew install \
  openssl

# Dependencies only needed for tests

brew install \
  autoconf \
  automake \
  cmake \
  libtool \
  libxml2 \
  libxslt \
  memcached \
  pkgconfig \
  snappy \
  sqlite3 \
  mysql

bundle config --global build.mysql2 --with-opt-dir="$(brew --prefix openssl)"
