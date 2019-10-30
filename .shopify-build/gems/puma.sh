repository https://github.com/puma/puma.git puma
apply-patch puma.patch

if ruby -e 'exit(Gem::Version.new(Gem::VERSION) < Gem::Version.new("3.0.6") ? 0 : 1)'; then gem update --system --no-document; fi
bundle install
if [ -x "$(command -v brew)" ]; then bundle exec rake compile -- "--with-opt-dir=$(brew --prefix openssl)"; fi
ulimit -n 2560 # macOS only allows 256 simultaneous FDs, which is too low

NIO4R_PURE=true CI=true bundle exec rake test
