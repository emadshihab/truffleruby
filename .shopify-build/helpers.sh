#!/bin/bash

set -eo pipefail

open_step() {
  echo "+++ $*"
}

close_step() {
  echo "^^^ ---"
}

clone_repo() {
  open_step "Cloning ${1}"
  git clone --single-branch "${1}"
  close_step
}
