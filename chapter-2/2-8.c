#include <stdio.h>
#include <stdlib.h>

/* Problem:
 * Write a function rightrot(x, y) that returns the value of the interger x
 * rotated ot the right by n bit positions.
 */

void printbits(char s[32], int x);
void rightrot(int x, int y);

int main(void){
    return EXIT_SUCCESS;
}

void printbits(char s[32], int x){
    int i;
    printf("\nint %s = %d\n\n", s, x);
    for(i = sizeof(int)*8 - 1; i > 0; i--){
        printf("%d", (x >> i) & 0x1); 
    }
    printf("%d\n", x & 0x1);
}

int rightrot(int x, int y){
    return (x >> y) | ((x & ~(~0 << y)) << (sizeof(int)*8 - y); 
}
