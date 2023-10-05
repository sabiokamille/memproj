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

    while(iter < (start_addr + 0x40)) {
        printf("%p: ", iter); // print the address
        for (int i = 0; i < 16; i++) {
            printf("%hhx",*(((unsigned char*) iter)+ i)); //print the 16 bytes of content 
                                                                 // at memory address

        }
        printf(" ");
        for (int i = 0; i < 16; i++) {
            printf("%c",*(((unsigned char*) iter)+ i)); //print the 16 bytes of content 
                                                              // at memory address

        }
        printf("\n");
        iter += 16;
    } 
    
}

int main(int argc, char **argv) {
    char testVar[] = "My name is Kam!\n";
    //printf("%p", &testVar);
    printMemContent(&testVar,environ[0]);
}