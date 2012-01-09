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
    char *s1 = "a-z0-9", s2[100] = {0};
    printf("s1: %s\n", s1);
    expand(s1, s2);
    printf("\nExpanded: %s\n", s2);
    return 0;
}

void expand(char *s1, char *s2)
{
    int l = strlen(s1);
    int start_flag = 0, end_flag = 0, shift = 0;
    int a, b, c, i, j;
    
    if(s1[0] == '-'){
        s2[0] = '-';
        start_flag = 1;
    } 
    /* a-b-c */

    if(start_flag == 0){
        shift = 0;
    } else {
        shift = 1;
    }
    /* First, test what it is */
    if( l == 3 || l == 4 ){ /* a - z */
        for(i = shift; i <= (s1[l - 1] - s1[shift]); i++){
            if(shift == 0)
                s2[i] = s1[shift] + i;
            else 
                s2[i] = s1[shift] + (i - 1);
        }
    } else if(s1[shift + 1] == '-' && s1[shift + 3] == '-'){  /* a-b-c */
        a = s1[shift];
        b = s1[shift + 2];
        c = s1[shift + 4];
        for(i = shift; i < (b - a); i++){ /* a - b */
            if(shift == 0)
                s2[i] = a + i;
            else 
                s2[i] = a + (i - 1);
        }
        for(; i <= (b - a) + (c - b); i++){
            if(shift == 0)
                s2[i] = a + i;
            else 
                s2[i] = a + (i - 1);
        }
    } else if(s1[shift + 1] == '-' && s1[shift + 4] == '-'){ /* a-z0-9 */
        for(i = shift; i <= (s1[shift + 2] - s1[shift]); i++){
            if(shift == 0)
                s2[i] = s1[shift] + i;
            else 
                s2[i] = s1[shift] + (i - 1);
        }
        for(j = 0; j <= (s1[l - 1] - s1[shift + 3]); i++, j++){
            
            s2[i] = s1[shift + 3] + j;
            
        }
    }
    
    if(s1[l - 1] == '-'){
    
    }
}