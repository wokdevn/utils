//
// Created by shun on 2023/6/13.
//

#include "../head/radix_convert.h"


//print data in binary
void print_b(void *pointer,size_t size){
    unsigned long data = *((unsigned long *)pointer);
    int length = size*8;
    int counter = 0;
    printf("deci: %d\n",data);
    printf("bin: ");
    while (length-->0){
        printf("%lu",(data>>length)&0x1);
        counter++;
        if(counter%8==0){
            printf(" ");
        }
    }
    printf("\n");
}