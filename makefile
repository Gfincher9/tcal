CC=gcc
CFLAGS=-I. -O2
DEPS = logic.h
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
tcal: main.c 
	$(CC) -o tcal main.c $(CFLAGS)	
	
