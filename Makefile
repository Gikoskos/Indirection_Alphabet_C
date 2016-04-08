CC := gcc
CFLAGS := -g -Wall -Wextra -std=c11 -o


indirection_alphabet: indirection_alphabet.c
	$(CC) $(CFLAGS) $@ $<

clean:
	@- rm indirection_alphabet
