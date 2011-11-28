#include <stdio.h>
#include <stdlib.h>

/* Problem:
   Write a function invert(x, p, n) that returns x with n 
   bits that begin at position p inverted (i.e., 1 changed 
   into 0 and vice versa), leaving the others unchanged.
 */

void printbits(char s[32], int x);
int invert(int x, int p, int n);

int main(void){
	int x = 37;
	printbits("x", x);
	
	printbits("z", invert(x, 5, 2));
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

int invert(int x, int p, int n){
	return (
            (
            ( (~(x >> (p - n + 1))) & (~(~0 << n))) << p + 1
            ) | (x & ~(~0 << p))
           );
}
