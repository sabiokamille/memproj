#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

extern void **environ;

void printMemContent(void *start_addr, void *end_addr) {
    void* iter = start_addr; //this iterator is used when looping through 
                             // memory and will increment by 16 bytes

    printf("Start address: %p\n", start_addr);
    printf("End address: %p\n", end_addr);

    printf("%llu\n", sizeof(start_addr));

    for (int i = 0; i < sizeof(start_addr); i++) {
                printf("%x",*(((unsigned char*) &start_addr)+ i)); //print the contents of memory at address

    }
        /*
    for(iter; iter < end_addr; iter + sizeof(start_addr)) {
        printf("%0x : ", iter); // print the address
        for (int i = 0; i < sizeof(iter); i++) {
                printf("%02x ",(char *) iter); //print the contents of memory at address

        } 
    } */
    
}

int main(int argc, char **argv) {
    int testVar = 12;
    printf("%p", &testVar);
    printMemContent(&testVar,environ[0]);
}