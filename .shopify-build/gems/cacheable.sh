repository git@github.com:Shopify/cacheable.git

apply-patch cacheable-gzip-timestamp.patch

bundle install
bundle exec rake
