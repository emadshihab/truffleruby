# Don't run this directly - see README.md

# Get sources
git clone git@github.com:Shopify/graal-jvmci-8-shopify.git
git clone git@github.com:Shopify/mx-shopify.git
git clone git@github.com:Shopify/graal-shopify.git

# TODO remove this hack for building on specific commits
pushd graal-shopify
ruby <<REPLACE
  target = 'vm/mx.vm/suite.py'
  content = File.read(target)
  content.sub!('https://github.com/oracle/truffleruby.git') { 'git@github.com:Shopify/truffleruby-shopify.git' }
  content.sub!('ac9074beb0ae7df52be2353d3bec788b606e6bea') { ENV['BUILDKITE_COMMIT'] }
  File.write(target, content)
REPLACE
git diff
popd

# Build JDK 8 JVMCI
pushd graal-jvmci-8-shopify
$bootstrap_java_home/bin/java -version
JAVA_HOME=$bootstrap_java_home $build_dir/mx-shopify/mx build
popd
jvmci_home=`echo $build_dir/graal-jvmci-8-shopify/openjdk*/*-amd64/product/$home_prefix`
$jvmci_home/bin/java -version

# This configuration is a combination of truffleruby/mx.truffleruby/native and graal/vm/mx.vm/ce-complete
export JAVA_HOME=$jvmci_home
export DYNAMIC_IMPORTS=/substratevm,/tools,/sulong,truffleruby
export SKIP_LIBRARIES=native-image-agent
export FORCE_BASH_LAUNCHERS=polyglot,lli,native-image,graalvm-native-clang++,native-image-configure,graalvm-native-clang,gu
export DISABLE_INSTALLABLES=true
export LIBGRAAL=true
export EXCLUDE_COMPONENTS=nju

# Build GraalVM
pushd graal-shopify/vm
$build_dir/mx-shopify/mx build
product_dir=`$build_dir/mx-shopify/mx graalvm-home`
popd

# Check we can actually at least run TruffleRuby
$product_dir/$home_prefix/bin/ruby -v

# Create the name that we want to call the distribution (the tarball and the directory in it)
shopify_name=truffleruby-shopify-$platform-$($product_dir/$home_prefix/bin/ruby -e 'puts TruffleRuby.revision')

# Make a tarball
pushd $product_dir/..
mv graalvm-*/$home_prefix $shopify_name
tar -zcf $build_dir/$shopify_name.tar.gz $shopify_name
popd

# Checksum
shasum -a 256 $shopify_name.tar.gz > $shopify_name.tar.gz.sha256
cat $shopify_name.tar.gz.sha256

# Print the contents we're shipping
tar -ztf $shopify_name.tar.gz
tar -zxf $shopify_name.tar.gz -O $shopify_name/release

# Print the size of the tarball
du -h $shopify_name.tar.gz
