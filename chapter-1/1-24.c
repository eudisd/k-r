#include <stdio.h>
#include <stdlib.h>
/* Problem: Write a program to check a C program for rudimentary syntax
 * errors like unbalanced parentheses, brackets and braces.  Don't forget
 * about quotes, both single and double, escape sequences, and comments.
 * (This program is hard if you do it in generality).
 */

#define STACK_SIZE 256

char stack[STACK_SIZE] = {0};
int i;
void check_for_errors();
int check_stack(char t);
int main(){

    char c;
    while((c = getchar()) != EOF){
        
        if(c == '"'){
            if(check_stack('"') == 0){
                stack[i] = '"';
                i++;
            } else {
                i--;
                stack[i] = 0;
                
            }
        } else if( c == '\''){
            if(check_stack('\'') == 0){
                stack[i] = '\'';
                i++;
            } else {
                i--;
                stack[i] = 0;
            }
        } else if( c == '{'){
            stack[i] = '{';
            i++;
        } else if( c == '}'){
            if(check_stack('{') == 1){
                i--;
                stack[i] = 0;
            } else {
                printf("Error! There are dangling '}'!!!\n");
                exit(-1);
            }
        } else if( c == '('){
            stack[i] = '(';
            i++;
        } else if( c == ')'){
            if(check_stack('(') == 1){
                i--;
                stack[i] = 0;
            } else {
                printf("Error! There are dangling ')'!!!\n");
                exit(-1);
            }
        }

        if(c == '\n'){
            int k;
            printf("Current Stack (Size %d): \n\n", i);
            for(k = 0; k <= i; k++){
                if(stack[k] != 0)
                    printf("Index: %d, %c\n", k,  stack[k]);
            }

            if(i > 0){
                printf("There is a syntax error in your code!!!\n");
                exit(-1);
            }
            // Reset everything here
            for(k=0; k< STACK_SIZE; k++)
                stack[k] = 0;
            
            i = 0;
        }
    }
    return EXIT_SUCCESS;
}

void check_for_errors(){

}

int check_stack(char t){
    int j;
    for(j = 0; j < STACK_SIZE; j++){
        if(t == stack[j]){
            return 1;
        }
    }
    return 0;
}
