#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a function escape(s, t) that converts characters like newline and
 * tab into visible escape sequences like \n and \t as it copies string t
 * to s.  Use a switch.  Write a function for the other direction as well,
 * converting escape sequences into real chracters
 */

#define MAX_SIZE 100

void escape(char *s, char *t);

int main(void)
{
    char s[MAX_SIZE];
    char t[MAX_SIZE] = "Here is a \n new like \t";

    printf("s: %s\nt: %s\n", s, t);
    escape(s, t);
    printf("s: %s\nt: %s\n", s, t);

    return 0;
}

void escape(char *s, char *t)
{
    int i, j;
    for(i = 0, j = 0; i < MAX_SIZE; i++){
        if(t[i] == '\0')
            break;
        else {
            if(t[i] == '\t') {
                s[j] = '\\'; j++;
                s[j] = 't'; j++;
                
            } else if (t[i] == '\n') {
                s[j] = '\\'; j++;
                s[j] = 'n'; j++;
            } else {
                s[j] = t[i];
                j++;
            }
        }
    }
}
