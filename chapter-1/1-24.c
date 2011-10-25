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

        } else if( c == '{'){

        } else if( c == '}'){

        } else if( c == '('){

        } else if( c == ')'){

        }

        if(c == '\n'){
            int k;
            for(k = 0; k <= i; k++){
                if(stack[k] != 0)
                    printf("%c\n", stack[k]);
            }
            //check_for_errors();
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
