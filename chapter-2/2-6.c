#include <stdio.h>
#include <stdlib.h>

/* Problem:
 * Write a function setbits(x, p, n, y) that returns x with the n bits that
 * begin at position p set to the rightmost n bits of y, leaving the other
 * bits unchanged. 
 */

void printbits(char s[32], int x);
int setbits(int x, int p, int n, int y);

int main(void){
    int x = 2, y = 3;
    printbits("x", x);
    printbits("y", y);

    printbits("z", setbits(x, 3, 3, y));
}

void printbits(char s[32], int x){
    int i;
    printf("\nint %s = %d\n\n", s, x);
    for(i = sizeof(int)*8 - 1; i > 0; i--){
        printf("%d", (x >> i) & 0x1); 
    }
    printf("%d\n", x & 0x1);
}

int setbits(int x, int p, int n, int y){
    return ((x >> (p + 1 - n)) | ((~(~0 << n)) & y) << p + 1);
}
