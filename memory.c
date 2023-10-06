#include "memory.h"

void getMemContent(void *start_addr, void *end_addr) {
    void* iter = start_addr; //this iterator is used when looping through 
                             // memory and will increment by 16 bytes
    int iter2 = *(int *)iter;
    printf("Start address: %p\n", start_addr);
    printf("End address:   %p\n", end_addr);

    while(iter2 < *(int *)end_addr) {
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
        iter += 0x40;
    }
    
}

void print_stack(void *start_addr, void *end_addr) {
    //char startVar[] = "My name is Kam!\n";
    getMemContent(end_addr,start_addr);
}
