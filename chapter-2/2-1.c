#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <float.h>

int main(void){
    
    printf("Signed\n\n");
    printf("char - Range [%d, %d]\n"
           "short - Range [%d, %d]\n"
           "int - Range [%d, %d]\n"
           "long - Range [%d, %d]\n",
            CHAR_MIN, CHAR_MAX,
            SHRT_MIN, SHRT_MAX,
            INT_MIN, INT_MAX,
            LONG_MIN, LONG_MAX); 
    
    printf("\n\nUnsigned\n\n");
    
             
    printf("unsigned char - Range [%d, %d]\n"
           "unsigned short - Range [%d, %d]\n"
           "unsigned int - Range [%u, %u]\n"
           "unsigned long - Range [%u, %u]\n",
            0, UCHAR_MAX,
            0, USHRT_MAX,
            0, UINT_MAX,
            0, ULONG_MAX); 


    printf("\n\nCOMPUTED\n\n");
    printf("Signed\n\n");
    printf("char - Range [%d, %d]\n"
           "short - Range [%d, %d]\n"
           "int - Range [%d, %d]\n"
           "long - Range [%d, %d]\n",
            -((int)pow(2.0, (double)(sizeof(char)*8 - 1))), 
            (int)pow(2.0, (double)(sizeof(char)*8 - 1)) - 1,
            -((int)pow(2.0, (double)(sizeof(short)*8 - 1))),
            (int)pow(2.0, (double)(sizeof(short)*8 - 1)) - 1,
            -((int)pow(2.0, (double)(sizeof(int)*8 - 1))),
            (int)pow(2.0, (double)(sizeof(int)*8 - 1)) - 1,
            -((int)pow(2.0, (double)(sizeof(long)*8 - 1))),
            (int)pow(2.0, (double)(sizeof(long)*8 - 1)) - 1
            ); 
    
    printf("\n\nUnsigned\n\n");
    
             
    printf("unsigned char - Range [%d, %d]\n"
           "unsigned short - Range [%d, %d]\n"
           "unsigned int - Range [%u, %u]\n"
           "unsigned long - Range [%u, %u]\n",
            0, UCHAR_MAX,
            0, USHRT_MAX,
            0, UINT_MAX,
            0, ULONG_MAX); 


    }
