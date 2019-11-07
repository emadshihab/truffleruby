# Sulong library load workaround
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/build/truffleruby-shopify/.shopify-build/build/jre/languages/ruby/lib/cext/
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/build/truffleruby-shopify/.shopify-build/build/jre/languages/llvm/native/lib/

gem install mysql2
ruby .shopify-build/gems/mysql2-test.rb
