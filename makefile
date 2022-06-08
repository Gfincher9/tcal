CC=gcc
CFLAGS=-I.
DEPS = logic.h
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
tcal: main.c 
	$(CC)  main.c $(CFLAGS)	