# Instructions and solution for Broken Password Safe CTF

## Instructions

You can use any tools/methods to solve this challenge, except:

* extract the flag from the executable
* use a debugger to read the flag
* patch the executable to display the flag

To start the challenge execute the file [Broken Password Safe](broken_pwsafe) and figure out what it does.

## Solution

The program is supposed to be the login mask of a password safe. Somehow the safe got compromised and a new password is automatically created for the user. 
The new password is generated using `srand()` with a *seed*, which is the current time, so it's always different, when you start the program. 
This *seed* is placed inside the error message. When the `rand()` function in C is executed with the same seed in a program the user must write for himself, he gets his new password, which he can then enter to get the flag.