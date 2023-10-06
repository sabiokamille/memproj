CC = gcc
CFLAGS = -Wall -g -std=c99 -fsanitize=address,undefined
OBJS = memory-test.o memory.o
TARGET: memory-test memory

all: $(TARGET)

memory-test: memory-test.o memory.o
	$(CC) $(CFLAGS) -o $@ $^

memory: memory.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o $(TARGET)