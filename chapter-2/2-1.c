#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    printf("Signed\n\n");
    printf("char: %d\n"
           "short: %d\n"
           "int: %d\n"
           "long: %d\n",
            sizeof(char), sizeof(short), sizeof(int), sizeof(long)); 
    
    printf("\n\nUnsigned\n\n");
    
    printf("unsigned char: %d\n"
           "unsigned short: %d\n"
           "unsigned int: %d\n"
           "unsigned long: %d\n",
            sizeof(unsigned char), 
            sizeof(unsigned short), 
            sizeof(unsigned int), 
            sizeof(unsigned long)); 
    }
