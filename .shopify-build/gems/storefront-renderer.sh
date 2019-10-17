repository git@github.com:rubys/nokogumbo.git nokogumbo
apply-patch nokogumbo.patch
bundle install
bundle exec rake gem
bundle exec gem install pkg/nokogumbo*.gem
popd

repository git@github.com:Shopify/storefront-renderer.git storefront-renderer

bundle install
