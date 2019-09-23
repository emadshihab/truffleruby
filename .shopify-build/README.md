# Building Shopify's TruffleRuby

Shopify's build of TruffleRuby is a GraalVM CE binary distribution containing
only TruffleRuby, Sulong, Native Image, Tools, and Java. It supports both
`--native` (default) and `--jvm`. Native images are only built for Ruby and
`libpolyglot`.

The included Java 8 JVMCI is built from source. To bootstrap it, on Linux the
system Java is used, and on macOS a AdoptOpenJDK build is used.

On macOS the `Contents/Home` prefix is removed.

See [build-common.sh](build-common.sh) for the precise build configuration.

Each time you run a build it will use the latest TruffleRuby, the version of
Graal that TruffleRuby specifies. We use latest `mx` and JVMCI. It's possible
that these won't be compatible, but we think we'd rather fix this manually
when it happens as it likely indicates something more subtle going on.

Note that building is quite intensive - you need at least 16 GB of RAM (remember
to configure Docker) and you may need an hour or more of build time.

## Building for Linux using Docker

The Linux build runs in Docker, in order to get isolation, and so it can run
on any platform.

Build the image once, then run it multiple times to generate new builds, and
copy the resulting binary tarball out. Packages in Linux distributions get
updated, so you may want to re-run the build periodically.

```bash
$ docker build -t truffleruby-build .
```

```bash
$ docker run -v $PWD:/external -t truffleruby-build
$ docker cp $(docker ps -alq):/build/... .
```

## Building for macOS

The macOS build just runs in a local directory rather than in a container, so
you need to be a bit more careful about ensuring you have a clean system to
run it on and don't interfere with it while it's running.

Of course, it also needs to run on macOS.

You also need to know what is in the repos and tarballs if you're going to run
them locally as they execute arbitrary code.

Install Xcode and command-line tools.

```bash
$ xcode-select --install
$ open /Library/Developer/CommandLineTools/Packages/macOS_SDK_headers_for_macOS_10.14.pkg
```

Install Homebrew and then dependencies.

```bash
$ brew install openssl
$ brew install llvm@4
```

Run the build script.

```bash
$ ./build-macos.sh
```

The resulting binary tarball and checksum is placed into this directory.
