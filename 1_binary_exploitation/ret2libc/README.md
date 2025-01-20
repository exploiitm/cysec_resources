# ret2libc demo

before running,

`$ export MYSHELL="/bin/bash"`

I was having problems with env variables, otherwise it should be fine ig

compile `main.c` using

`$ gcc -no-pie -fno-stack-protector -static main.c`

Ideally it will work without `static` as well, in which case rop gadgets and
system address have to be received from `libc.so.6`. Use `ldd` to check the
base address of `libc.so` and then add the offsets of the rop gadgets.
