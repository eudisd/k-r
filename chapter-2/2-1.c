#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void){
    
    printf("Signed\n\n");
    printf("char - Range [%d, %d]\n"
           "short - Range [%d, %d] %d\n"
           "int - Range [%d, %d]\n"
           "long - Range [%d, %d]\n",
            CHAR_MIN, CHAR_MAX,
            SHRT_MIN, SHRT_MAX,
            INT_MIN, INT_MAX,
            LONG_MIN, LONG_MAX); 
    
    printf("\n\nUnsigned\n\n");
    
    printf("unsigned char: %d\n"
           "unsigned short: %d\n"
           "unsigned int: %d\n"
           "unsigned long: %d\n",
             
            sizeof(unsigned short), 
            sizeof(unsigned int), 
            sizeof(unsigned long));


    }
