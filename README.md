# realpath for OS X

a.k.a. _"the only useful C program I ever wrote"_

A minimal implementation of `realpath(1)` which is included in most UNIX
distributions, but not Mac OS X.

To install:

    $ make
    $ make install # may need sudo

To install with CMake:

    $ cmake .
    $ make && sudo make install
