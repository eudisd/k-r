#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a version of itoa that accepts three argument instead of two.  The
 * third argument is a minimum field width; the converted number must be
 * padded with blanks on the left if necessary to make it wide enough.
 */


void itoa(double n, char s[], int w);
void reverse(char *s);
void shift_right(char *s, int n, int at);

int main(void)
{
    int integer = 1234;
    char tmp[100];
    itoa(integer, tmp, 1);
    printf("%s\n", tmp); 
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
    
    if(i > w){
        s[w] = '\0';
    } else if( (w - i) > 0 ) {
        shift_right(s, (w - i), i);
    }

}
void shift_right(char *s, int n, int at)
{
    int i, j;
    int tmp = at;
    for(i = 0; i < n; i++, tmp++){ /* Shift, this many times */
        for(j = tmp; j > 0; j--) { /* actual shift */
            s[j] = s[j - 1];
        }
    }
    s[tmp] = '\0';

    for(i = 0; i < n; i++){
        s[i] = '0';
    }
}
