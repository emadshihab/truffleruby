# Don't run this directly - it's sourced from test-*.sh

set -x
set -e

# Unset all variables that could be set by a system Ruby which may cause us issues
unset GEM_HOME GEM_PATH GEM_ROOT RUBY_ENGINE RUBY_ROOT RUBY_VERSION

pushd archive
tar -zxf truffleruby-*.tar.gz
PATH=`echo $PWD/truffleruby-*/bin`:$PATH
popd

ruby --version
