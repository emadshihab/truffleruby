repository git@github.com:rubys/nokogumbo.git
apply-patch nokogumbo.patch

bundle install
bundle exec rake compile
