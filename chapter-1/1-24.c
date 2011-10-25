#include <stdio.h>
#include <stdlib.h>
/* Problem: Write a program to check a C program for rudimentary syntax
 * errors like unbalanced parentheses, brackets and braces.  Don't forget
 * about quotes, both single and double, escape sequences, and comments.
 * (This program is hard if you do it in generality).
 */


char paren_stack[256],
     bracket_stack[256],
     quote_stack[256],
     sq_stack[256],
     comment_stack[256];

int main(){

    char c;
    while((c = getchar()) != EOF){
        
    }
    return EXIT_SUCCESS;
}
