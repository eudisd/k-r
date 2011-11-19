#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Problem:
 * Write the function any(s1, s2) which returns the first location in the
 * string s1 where any character from the string s2 occurs, or -1 if s1
 * contains no characters from s2. 
 */

int any(char *s1, char *s2);

int main(void){
    char s1[] = "Example string",
         s2[] = "Second string";

    printf("Any? %d\n", any(s1, s2));

    return 0;
}

int any(char *s1, char *s2){
    
    int i, j;
    for(i = 0; i < strlen(s1); i++)
        for(j = 0; j < strlen(s2); j++)
            if( s1[i] == s2[j] )
                return i;
    return -1;
}
