#include <stdio.h>
#include <stdlib.h>

/* Problem:
 * In a two's complement number system, x &= (x - 1) deleted the rightmost
 * 1-bit in x.  Explain why.  Use this observation to write a faster
 * version of bitcount
 */


/* Answer:
 * The reason this operation deletes the rightmost bit is because
 * subtraction by one requires the right most bit (2^0 = 1).  In
 * 2's completement this expands to x = x & (x + (~1 + 1)), which 
 * holds in fliping the right most bit when &'ed by x.  
 */

int bitcount(int x);

int main(void){
    int x = 0xf;
    printf("number of bits? %d\n", bitcount(x));
    return EXIT_SUCCESS;
}

int bitcount(int x)
{
    int b=0;
    while(x){
        x &= (x - 1);
        b++;
    }
    
    return b;
}
