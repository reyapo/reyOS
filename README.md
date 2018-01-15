# reyOS

reyOS is for me to experiment with OS building. As of now I have little to no experience so don't take this to seriously :).

## preperation

source the `environment` file to setup all the environment variables, then run `./setup-toolchain`. This wil prepare the complete toolchain that you need in the `toolchain` folder (this takes a while, as it compiles a compiler). Note: this will also install some apt dependencies. Now run `tup init` and everything can be compiled by simply running `tup`!

## Running

To run reyOS you need qemu (or a i686 pc if you are feeling adventurous). When installed run:
```
qemu-system-i386 -cdrom reyOS.iso
```