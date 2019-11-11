cd storefront-renderer

sudo apt-get update
sudo apt-get install -y mysql-client

bundle exec rake db:load test:unit test:shared test:liquid
