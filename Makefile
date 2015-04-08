CC=gcc
CFLAGS=-I.
DEPS = syscalls.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

syscalls: syscalls.o
	gcc -std=ansi -o $@ $^ $(CFLAGS)

myls: myLS.o
	gcc -std=ansi -o $@ $^ $(CFLAGS)

syscalls32_64: syscalls32_64.o
	gcc -std=ansi -o $@ $^ $(CFLAGS)
