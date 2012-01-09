#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a function expand(s1, s2) that expands shorthand notations like
 * a-z in the string s1 into the equivalent complete list abc...xyz in s2.
 * Allow for letters of either case and digits, and be prepared to handle
 * cases like a-b-c and a-z0-9 and -a-z.  Arrange that a leading or
 * trailing - is taken literaly
 */

void expand(char *s1, char *s2);

int main(void)
{
    char *s1 = "a-z", s2[100];
    printf("s1: %s\n", s1);
    expand(s1, s2);
    printf("\nExpanded: %s\n", s2);
    return 0;
}

void expand(char *s1, char *s2)
{
    int l = strlen(s1);
    if(s1[0] == '-'){
        s2[0] = '-';
    } 
    
    
    if(s1[l - 1] == '-'){
    
    }
}