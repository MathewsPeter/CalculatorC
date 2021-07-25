CC=gcc
CFLAGS=-I -lm.

DEPS = *.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

a.out: main.o calc.o
	$(CC) -o a.out main.o calc.o $(CFLAGS)
