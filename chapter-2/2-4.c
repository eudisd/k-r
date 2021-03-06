#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* Problem: 
 * Write an alternative version of squeeze(s1, s2) that deletes each
 * character in s1 that matches any character in the string s2
 */

int squeeze(char s1[], char s2[]);
void shift_left(char s[], int at, int n);
int main(void){

    char a[] = "Hi there", b[] = "Hhhh";
    printf("Original: %s\n", a);
    squeeze(a, b);
    printf("New: %s\n", a);
    return EXIT_SUCCESS;
}

int squeeze(char s1[], char s2[]){

    int i = 0, j;
    for(; i < strlen(s2); i++){
        for(j = 0; j < strlen(s1); j++){
            if(s2[i] == s1[j]){
               shift_left(s1, j, strlen(s1));
            }
        }
    }
}

void shift_left(char *s, int at, int n){

    int i;
    for(i = at; i < n - 1; i++)
        s[i] = s[i + 1];

    s[i] = '\0';

}
