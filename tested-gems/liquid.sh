repository git@github.com:Shopify/liquid.git

apply-patch liquid.patch

bundle install
bundle exec rake base_test
