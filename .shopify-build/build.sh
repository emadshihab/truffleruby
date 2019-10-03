#!/bin/bash
source ".shopify-build/helpers.sh"

rm -rf "${BUILD_DIR}"
mkdir -p "${BUILD_DIR}"
pushd "${BUILD_DIR}"

if [[ $(uname) == "Darwin" ]]; then
  source "${SHOPIFY_BUILD_PATH}/setup-macos.sh"

  home_prefix=Contents/Home
  platform=macos

  # We need some kind of JDK 8 to bootstrap and one isn't included in macOS.
  # Let's just download a binary tarball from AdoptOpenJDK and use that without
  # any kind of installation to keep things as simple as possible.

  # TODO(byroot): cache this on CI
  ci_step "Download OpenJDK"
  curl -OL https://github.com/AdoptOpenJDK/openjdk8-binaries/releases/download/jdk8u222-b10/OpenJDK8U-jdk_x64_mac_hotspot_8u222b10.tar.gz
  tar -zxf OpenJDK8U-jdk_x64_mac_hotspot_8u222b10.tar.gz
  bootstrap_java_home="${BUILD_DIR}"/jdk8u222-b10/Contents/Home
else
  home_prefix=
  platform=linux
  bootstrap_java_home=/usr/lib/jvm/java-8-openjdk-amd64
fi

# Get sources
pushd "${BUILD_DIR}"
clone_repo git@github.com:Shopify/graal-jvmci-8-shopify.git
clone_repo git@github.com:Shopify/mx-shopify.git
clone_repo git@github.com:Shopify/graal-shopify.git

ci_step "Checkout truffle"
# GraalVM refers to a particular version of TruffleRuby, and will reset the
# repository to that commit. We need to modify the version it refers to, to the
# version we wanted to be building.

pushd graal-shopify
ruby <<REPLACE
  target = 'vm/mx.vm/suite.py'
  content = File.read(target)
  current_commit = ENV['BUILDKITE_COMMIT']
  current_repo = 'git@github.com:Shopify/truffleruby-shopify.git'

  content.sub!('https://github.com/oracle/truffleruby.git') { current_repo }
  content.sub!('24304a356973e0e88ad6e5b377c9f874c72e66fa') { current_commit }
  raise "replacement failed" unless content.include?(current_commit) && content.include?(current_repo)
  File.write(target, content)
REPLACE
popd

ci_step "Build JDK 8"
# The version of JVMCI is in ci.jsonnet but it's a bit tricky to get it out - may break in the future
jvmci_tag=$(ruby <<JVMCI
  File.read('${SHOPIFY_BUILD_PATH}/../ci.jsonnet') =~ /version: "\du\d+-(jvmci-\d+(\.\d+)-b\d+)"/
  puts \$1
JVMCI
)

# Build JDK 8 JVMCI
pushd graal-jvmci-8-shopify
git checkout "${jvmci_tag}"
"${bootstrap_java_home}/bin/java" -version
JAVA_HOME="${bootstrap_java_home}" "${BUILD_DIR}/mx-shopify/mx" build
popd
jvmci_home=$(echo "${BUILD_DIR}"/graal-jvmci-8-shopify/openjdk*/*-amd64/product/"${home_prefix}")
"${jvmci_home}/bin/java" -version

# This configuration is a combination of truffleruby/mx.truffleruby/native and
# graal/vm/mx.vm/ce-complete. It's primarily a native image of Ruby, but
# including a full JVM and tools for debugging.
export JAVA_HOME=$jvmci_home
export DYNAMIC_IMPORTS=/substratevm,/tools,/sulong,truffleruby
export SKIP_LIBRARIES=native-image-agent
export FORCE_BASH_LAUNCHERS=polyglot,lli,native-image,graalvm-native-clang++,native-image-configure,graalvm-native-clang,gu
export DISABLE_INSTALLABLES=true
export LIBGRAAL=true
export EXCLUDE_COMPONENTS=nju


ci_step "Build GraalVM"
# Build GraalVM
pushd graal-shopify/vm
"${BUILD_DIR}/mx-shopify/mx" build
PRODUCT_DIR=$("${BUILD_DIR}/mx-shopify/mx" graalvm-home)
popd
# Check we can actually at least run TruffleRuby
"${PRODUCT_DIR}/bin/ruby" -v

ci_step "Export move dist to cache"
mkdir -p "${PROJECT_ROOT}/dist"
mv "${PRODUCT_DIR}"/* "${PROJECT_ROOT}/dist"

