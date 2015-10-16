CC ?= gcc
CFLAGS_common ?= -O0 -Wall -std=gnu99

EXEC = iterative recursive
all: $(EXEC)

iterative: iterative.c q6.h
	$(CC) $(CFLAGS_common) -o $@ $@.c

recursive: recursive.c q6.h
	$(CC) $(CFLAGS_common) -o $@ $@.c

clean:
	$(RM) $(EXEC) *.o perf.*
