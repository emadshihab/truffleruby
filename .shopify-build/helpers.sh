#!/bin/bash

set -eo pipefail

export PROJECT_ROOT="${PWD}"
export SHOPIFY_BUILD_PATH="${PROJECT_ROOT}/.shopify-build"
export BUILD_DIR="${PROJECT_ROOT}/build"
export DIST_DIR="${PROJECT_ROOT}/build"

ci_step() {
  echo "--- $*"
}

clone_repo() {
  ci_step "Cloning ${1}"
  git clone --single-branch "${1}"
}

repository() {
  git clone --single-branch "${1}" "${2-repo}"
  pushd "${2-repo}"
}

apply-patch() {
  git apply "${PROJECT_ROOT}/tested-gems/patches/${1}"
}

run() {
  ci_step "$*"
  "$@"
}
