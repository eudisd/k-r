#include <stdio.h>
#include <stdlib.h>

/* Problem: Write a program to remove all comments from a C program.  Don't
 * forget to handle quoted strings and character constants properly.  C
 * comments do not nest.
 */

#define INSIDE 0
#define OUTSIDE 1

char peekchar();

int main(){

    char c;
    char state = OUTSIDE;
    while((c = getchar()) != NULL){

        if(c == '/'){
            c = peekchar();
        }

        if(state = INSIDE){
            continue;
        } else if (state = OUTSIDE) {
            printf("%c", c);
        }
    }
    return EXIT_SUCCESS;
}

char peekchar(){
    c = getchar();
    ungetc(c, stdin)
}
