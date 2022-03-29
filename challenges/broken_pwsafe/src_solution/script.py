# Python script to exploit Broken Password Safe CTF

# Import pwntools
from pwn import *

# Remove prefix function (with python 3.9 str.removeprefix() can be used instead)
def remove_prefix(text, prefix):
    return text[len(prefix):]

# Start io
ctf = process('./a.out') # io for ctf itself
rs = process('./rand_seed') # io for the random seed generator

ctf.recv() # recive first lines of output from program
ctf.sendline('45t24g24'.encode('utf-8')) # send random password
seed = ctf.recvline() # reed error
txt = remove_prefix(seed, 'Error: ') # cut recived error string
rs.sendline(txt) # send seed to generator
nbr = rs.recvline() # recive generated number
ctf.recv() # continue ctf program
ctf.sendline(nbr) # send random number and unlock safe
flag = ctf.recvline() # capture the flag

# Close io
ctf.close()
rs.close()

# Print the flag
print(flag)