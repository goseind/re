# Makefile for Broken Password Safe CTF and Radom Seed Generator
.PHONY: all
all: rand_seed broken_pwsafe

rand_seed broken_pwsafe: rand_seed.c broken_pwsafe.c
	cc $@.c -o $@

.PHONY: clean
clean:
	rm -f broken_pwsafe rand_seed