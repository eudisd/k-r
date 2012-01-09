#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* In a two's complement number representation, our version of itoa does
 * not handle the largest negative number, that is, the value of n equals
 * to -(2^(wordsize-1)).  Explain why not.  Modify it to print that value
 * correctly, regardless of the machine on which it runs.
 *
 * Anwser: Simply put, in 2's complement, we cannot hold the value
 * of the positive number begot from the negation of the largest negative number.
 * This is because the negative number is one value greater than the largest
 * positive number, and so in negating it to positive, there is overflow
 * since the largest negative number cannot be stored as the largest
 * postive number in a word (int).
 */
void reverse(char *s);
void itoa(int n, char s[]);

int main(void)
{
    char ar[100];
    itoa(20, ar);
    printf("%s", ar);
    return 0;
}
void reverse(char *s){
    int tmp, i, len = strlen(s);
    for(i = 0; i < len/2; i++){
        tmp = s[i];
        s[i] = s[(len - 1) - i];
        s[(len - 1) - i] = tmp;  
    }
}
       
void itoa(int n, char s[]){
    int i, sign;
    if((sign = n) < 0)
        n = -n;

    i = 0;

    do {
        s[i++] = n % 10 + '0';
    } while((n /= 10) > 0);
    if(sign > 0){
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}
