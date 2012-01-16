#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write the function itob(n, s, b) that converts the integer n, into a
 * base b character representation in the string s.  In particular,
 * itob(n,s,16) formats n as a hexadecimal integer in s.
 */

void reverse(char *s);
void itob(double n, char *s, int b);

int main(void)
{
    char ar[100];
    itob(255, ar, 16);
    printf("%s\n", ar);
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
       
void itob(double n, char s[], int b){
    int i, sign;
    unsigned int tmp;

    if((sign = (int)n) < 0)
        tmp = (int)-n;
    else 
        tmp = (int)n;
    
    i = 0;

    do {
        int t = tmp % b;

        if(t > 9 && t < 16){
            s[i++] = (t - 10) + 'a';
        } else {
            s[i++] = t + '0';
        }
    } while((tmp /= b) > 0);
    if(sign < 0){
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

