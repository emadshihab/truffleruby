repository https://github.com/protocolbuffers/protobuf.git
apply-patch protobuf/0001-Use-if-else-instead-of-switch-case-for-truffle.patch
apply-patch protobuf/0002-work-around-hashing-inconsistency.patch
apply-patch protobuf/0003-skip-slow-tests.patch
apply-patch protobuf/0004-Truffle-as-a-protected-Array-swap.patch

if [[ "$OSTYPE" == "darwin"* ]]; then zipname='protoc-3.10.0-osx-x86_64.zip'; else zipname='protoc-3.10.0-linux-x86_64.zip'; fi
curl -OL "https://github.com/protocolbuffers/protobuf/releases/download/v3.10.0/$zipname"
unzip "$zipname"
mv bin/protoc src/protoc # instead of building from source

cd ruby
bundle install
bundle exec rake test
