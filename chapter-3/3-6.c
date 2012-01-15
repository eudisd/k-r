#include <stdio.h>
#include <stdlib.h>

/* Write a version of itoa that accepts three argument instead of two.  The
 * third argument is a minimum field width; the converted number must be
 * padded with blanks on the left if necessary to make it wide enough.
 */


void itoa(double n, char s[], int w){

int main(void)
{
    return 0;
}


void itoa(double n, char s[], int w){
    int i, sign;
    unsigned int tmp;

    if((sign = (int)n) < 0)
        tmp = (int)-n;
    else 
        tmp = (int)n;
    
    i = 0;

    do {
        s[i++] = tmp % 10 + '0';
    } while((tmp /= 10) > 0);
    if(sign < 0){
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}
