#!/bin/bash

set -x
set -e

home_prefix=Contents/Home
platform=macos

build_dir=$PWD/$(mktemp -d temp-build-XXXXXXXXXX)
pushd $build_dir

curl -OL https://github.com/AdoptOpenJDK/openjdk8-binaries/releases/download/jdk8u222-b10/OpenJDK8U-jdk_x64_mac_hotspot_8u222b10.tar.gz
tar -zxf OpenJDK8U-jdk_x64_mac_hotspot_8u222b10.tar.gz
bootstrap_java_home=$build_dir/jdk8u222-b10/Contents/Home

source ../build-common.sh

cp $shopify_name.tar.gz $shopify_name.tar.gz.sha256 ../artifacts

popd $build_dir
rm -rf $build_dir
