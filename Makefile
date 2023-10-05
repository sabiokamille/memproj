CC = gcc
CFLAGS = -Wall -g -std=c99 -fsanitize=address,undefined
OBJS = memory.o

all: memory

memory: $(OBJS)
	$(CC) $(CFLAGS) -o $@  $^	
memory.o: memory.c
	$(CC) $(CFLAGS) -c $^
clean:
	rm -rf *.o memory
