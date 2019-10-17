# Copyright (c) 2019 Oracle and/or its affiliates. All rights reserved. This
# code is released under a tri EPL/GPL/LGPL license. You can use it,
# redistribute it and/or modify it under the terms of the:
#
# Eclipse Public License version 2.0, or
# GNU General Public License version 2, or
# GNU Lesser General Public License version 2.1.

require_relative '../ruby/spec_helper'

describe "The Shopify build" do

  it "mentions Shopify in the version" do
    ruby_exe(nil, args: '-v').should include('(Shopify)')
  end

  it "is native by default" do
    ruby_exe(nil, args: '-v').should include('Native')
  end

  it "includes Graal" do
    ruby_exe(nil, args: '-v').should include('GraalVM CE')
  end

  it "can run native" do
    ruby_exe(nil, args: '--native -v').should include('Native')
  end

  it "can run JVM" do
    ruby_exe(nil, args: '--jvm -v').should include('JVM')
  end

  it "includes libgraal" do
    ruby_exe(nil, args: '--jvm --vm.XX:+UseJVMCINativeLibrary -e 14').should_not include('image not found')
  end

end
