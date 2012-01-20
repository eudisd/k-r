#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write the function strrindex(s, t) which returns the position of the
 * rightmost occurrence of t in s, or -1 if there is none.
 */

int strrindex(char *s, char *t);

int main(void)
{
    char *a = "Hello, World, World",
         *b = "World";

    printf("Right Most Position: %d\n", strrindex(a, b));
}

int strrindex(char *s, char *t)
{
    int i, j, k;
    int len_s = strlen(s);
    int len_t = strlen(t);
    for(i = len_s; i > 0; i--){
        if( (len_s - i) >= len_t ){
            for(j = i, k = 0; s[j] == t[k] && (t[k] != '\0'); j++, k++)
                ;
            if(k > 0 && t[k] == '\0'){
                return i;
            }
        }
    }
    return -1;
}
