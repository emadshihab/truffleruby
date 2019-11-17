#!/bin/bash

set -eo pipefail

echo "--- Installing JVMCI"
tool/jt.rb install jvmci

echo "--- Installing mx"
tool/jt.rb mx --version

echo "--- Installing Graal"
tool/jt.rb mx sforceimports

echo "--- Building"
tool/jt.rb build --env jvm

echo "--- Linting"
sudo gem install rubocop -v 0.66.0
CONTINUOUS_INTEGRATION=true tool/jt.rb lint
