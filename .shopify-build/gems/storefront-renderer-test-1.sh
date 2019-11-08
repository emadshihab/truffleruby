cd storefront-renderer

sudo apt-get update
sudo apt-get install -y mysql-client

# Sulong library load workaround
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/build/truffleruby-shopify/.shopify-build/build/jre/languages/ruby/lib/cext/
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/build/truffleruby-shopify/.shopify-build/build/jre/languages/llvm/native/lib/

bundle exec rake db:load test:unit test:shared test:liquid
