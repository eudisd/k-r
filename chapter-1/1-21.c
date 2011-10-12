#include <stdio.h>
#include <stdlib.h>

/* Write a program detab that replaces tabs in the input with the proper
 * number of blanks to space to the next tab stop.  Assume a fixed set of
 * tab stops, say every n columns.  Should n be a variable or asymbolic
 * parameter? 
 *
 * Answer to question:
 * n should be a symbolic constant, or a variable constant, but it should
 * be fixed.
 */
#define TABSTOP 4

int main(void ){
    char c;
    int i;
    
    while((c = getchar()) != EOF){
        if(c == '\t'){
            for(i = 0; i < TABSTOP; i++){
                printf(" ");
            }
        } else {
            printf("%c", c);
        }
    }
    return EXIT_SUCCESS;
}
