#include "memory.h"

void getMemContent(void *start_addr, void *end_addr) {
    void* iter = start_addr; //this iterator is used when looping through 
                             // memory and will increment by 16 bytes
    printf("Start address: %p\n", iter);
    printf("End address:   %p\n", end_addr);

    while(iter < end_addr) {
        printf("%p: ", iter); // print the address
        for (int i = 0; i < 16; i++) {
            printf("%hhx",*(((unsigned char*) iter)+ i)); //print the 16 bytes of content 
                                                          // at memory address
            }
        printf(" ");
        for (int i = 0; i < 16; i++) {
            if(isprint(*(((unsigned char*) iter)+ i)) == 0) {
                printf(".");
            } else {
            printf("%c",*(((unsigned char*) iter)+ i)); //print the 16 bytes of content 
                                                        // at memory address
            }

        }
        printf("\n");
        iter += 16;
    }
    
}

void print_stack(void *start_addr, void *end_addr) {
    //char startVar[] = "My name is Kam!\n";
    getMemContent(start_addr,end_addr);
}
