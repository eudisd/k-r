#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* Problem: 
 * Write an alternative version of squeeze(s1, s2) that deletes each
 * character in s1 that matches any character in the string s2
 */

int squeeze(char s1[], char s2[]);
char *shift_left(char at[], int n);
int main(void){

    char a[] = "Hi there";
    printf("Original: %s", a);
    return EXIT_SUCCESS;
}

int squeeze(char s1[], char s2[]){

    int i = 0, j;
    for(; i < strlen(s2); i++){
        
        while( *s1 != '\0' ){
            
        }
    }
}

char *shift_left(char *at, int n){

    int i;
    for(i = 0; i < n - 1; i++)
        at[i] = at[i + 1];

    return at;
}
