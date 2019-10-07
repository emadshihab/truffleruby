repository git@github.com:Shopify/money.git
apply-patch money.patch

bundle install
bundle exec rake
