#ifndef MEMORY_H_
#define MEMORY_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void printMemContent(void *start_addr, void *end_addr);
void print_stack(void *start_addr, void *end_addr);

#endif