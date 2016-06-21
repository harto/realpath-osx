# realpath for OS X

a.k.a. _"the only useful C program I ever wrote"_

A minimal implementation of `realpath(1)` which is included in most UNIX
distributions, but not Mac OS X.

To install:
```sh
$ git clone https://github.com/harto/realpath-osx.git
$ cd realpath-osx
$ make
$ sudo make install
```

## GNU realpath

If you want a "real" implementation of this command, the GNU version is
available via the `coreutils` [Homebrew](http://brew.sh/) formula:
```sh
brew install coreutils
```
