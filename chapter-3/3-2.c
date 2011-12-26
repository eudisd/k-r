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
void rescape(char *s, char *t);

int main(void)
{
    char s[MAX_SIZE];
    char t[MAX_SIZE] = "Here is a \\n new like \\t";

    printf("s: %s\nt: %s\n", s, t);
    rescape(s, t);
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
            switch(t[i]){
                case '\t':
                    s[j] = '\\'; j++;
                    s[j] = 't'; j++;
                    break;
                case '\n':
                    s[j] = '\\'; j++;
                    s[j] = 'n'; j++;
                    break;
                default:
                    s[j] = t[i];
                    j++;
                    break;
            }
        }
    }
}

void rescape(char *s, char *t)
{
    int i, j;
    for(i = 0, j = 0; i < MAX_SIZE; i++){
        if(t[j] == '\0')
            break;
        else {
            switch(t[j]){
                case '\\':
                    if(t[j + 1] == 'n'){
                        s[i] = '\n';
                        j++; j++; 
                    } else if (t[j + 1] == 't'){
                        s[i] = '\t';
                        j++; j++;
                    }
                    break;
                default:
                                        
                    s[i] = t[j];
                    j++;
                    break;
            }
        }
    }
}

