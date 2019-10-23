full-repository git@github.com:Shopify/liquid.git
git checkout 5302f40342d014bfd09f259096df079e50031d96

apply-patch liquid.patch

bundle install
bundle exec rake base_test
