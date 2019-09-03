# Don't run this directly

unset GEM_HOME GEM_PATH GEM_ROOT RUBY_ENGINE RUBY_ROOT RUBY_VERSION

pushd archive
tar -zxf truffleruby-*.tar.gz
PATH=`echo $PWD/truffleruby-*/bin`:$PATH
popd

ruby --version
