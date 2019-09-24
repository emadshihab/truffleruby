# Don't run this directly - it's sourced from build-(linux|macos).sh

# Get sources
git clone git@github.com:Shopify/graal-jvmci-8-shopify.git
git clone git@github.com:Shopify/mx-shopify.git
git clone git@github.com:Shopify/graal-shopify.git

# GraalVM refers to a particular version of TruffleRuby, and will reset the
# repository to that commit. We need to modify the version it refers to, to the
# version we wanted to be building.

pushd graal-shopify
ruby <<REPLACE
  target = 'vm/mx.vm/suite.py'
  content = File.read(target)
  current_commit = ENV['BUILDKITE_COMMIT']
  current_repo = 'git@github.com:Shopify/truffleruby-shopify.git'

  content.sub!('https://github.com/oracle/truffleruby.git') { current_repo }
  content.sub!('1970686ee677bcf2d08c34371d1673f56cd96b3e') { current_commit }
  raise "replacement failed" unless content.include?(current_commit) && content.include?(current_repo)
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

# This configuration is a combination of truffleruby/mx.truffleruby/native and
# graal/vm/mx.vm/ce-complete. It's primarily a native image of Ruby, but
# including a full JVM and tools for debugging.
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
$product_dir/bin/ruby -v

# Create the name that we want to call the distribution (the tarball and the directory in it)
shopify_name=truffleruby-shopify-$platform-$($product_dir/bin/ruby -e 'puts TruffleRuby.revision')

# Make a tarball. What we're going to do is move to the product directory,
# which includes $home_prefix, then we're going to create a directory with our
# name and move all files into that. We don't want Contents/Home in macOS, as
# it does nothing useful unless you're installing as a system Java, which
# there is very little reason to do with TruffleRuby.
pushd $product_dir
files=`ls .`
mkdir $shopify_name
mv $files $shopify_name
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
