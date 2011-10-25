#include <stdio.h>
#include <stdlib.h>
/* Problem: Write a program to check a C program for rudimentary syntax
 * errors like unbalanced parentheses, brackets and braces.  Don't forget
 * about quotes, both single and double, escape sequences, and comments.
 * (This program is hard if you do it in generality).
 */

#define STACK_SIZE 256;

char stack[STACK_SIZE];
int i;
//void check_for_errors();
int check_stack(char t);
int main(){

    char c;
    while((c = getchar()) != EOF){
        if     
        if(c == '\n'){
            //check_for_errors();
        }
    }
    return EXIT_SUCCESS;
}

void check_for_errors(){

}

int check_stack(char t){
    int i;
    for(i = 0; i < STACK_SIZE; i++){
        if(t == stack[i]){
            return 1;
        }
    }
    return 0;
}
