#include <stdio.h>
#include <stdlib.h>

/* Problem: Write a program to remove all comments from a C program.  Don't
 * forget to handle quoted strings and character constants properly.  C
 * comments do not nest.
 */

#define INSIDE 0
#define OUTSIDE 1
#define INSIDE_STRING 2

char peekchar();

int main(){

    char c;
    char state = OUTSIDE;
    while((c = getchar()) != EOF){
        if (c == '"' && state == OUTSIDE){
            state = INSIDE_STRING; 
        } else if (c == '"' && state == INSIDE_STRING){
            state = OUTSIDE;
        } else if(c == '/' && state == OUTSIDE){
            char c_peek = peekchar();
            if(c_peek == '*'){
                state = INSIDE;
            }
        } else if(c == '*' && state = INSIDE){
            c_peek = peekchar();
            if(c_peek = '/'){
                state = OUTSIDE;
            }
        }

        if(state == INSIDE){
            continue;
        } else if (state == OUTSIDE || state == INSIDE_STRING) {
            printf("%c", c);
        }
    }
    return EXIT_SUCCESS;
}

char peekchar(){
    char c = getchar();
    if(c != EOF)
        ungetc(c, stdin);
    return c;
}
