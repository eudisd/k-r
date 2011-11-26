#include <stdio.h>
#include <stdlib.h>

/* Problem:
 * Write a function setbits(x, p, n, y) that returns x with the n bits that
 * begin at position p set to the rightmost n bits of y, leaving the other
 * bits unchanged. 
 */

void printbits(int x);
int setbits(int x, int p, int n, int y);

int main(void){
    int x = 2;
    printbits(x);
}

void printbits(int x){
    int i;
    printf("int x = %d\n\n", x);
    for(i = sizeof(int)*8 - 1; i > 0; i--){
        printf("%d", (x >> i) & 0x1); 
    }
    printf("%d", x & 0x1);
}

int setbits(int x, int p, int n, int y){


}
