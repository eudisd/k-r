#include <stdio.h>
#include <stdlib.h>

/* Problem: Rewrite the function lower, which convert upper case letters to
 * lover case, with a conditional expression instead of if-else.
 */

char lower(char l);

int main(void){
    printf("Upper: %c\n Lower: %c\n", 'A', lower('A'));
    return EXIT_SUCCESS;
}

char lower(char l){
    return (l >= 65 && l <= 90)? (l + 32) : 0;
}
