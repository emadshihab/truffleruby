#!/bin/bash

set -x
set -e

home_prefix=
platform=linux
bootstrap_java_home=/usr/lib/jvm/java-8-openjdk-amd64

parent_path=$(realpath "$(dirname -- "$(readlink -f -- "$BASH_SOURCE[0]")")")
build_dir=$PWD/$(mktemp -d temp-build-XXXXXXXXXX)

pushd $build_dir
source "${parent_path}/build-common.sh"
cp $shopify_name.tar.gz $shopify_name.tar.gz.sha256 /build/artifacts
popd
