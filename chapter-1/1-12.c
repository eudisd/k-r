#include <stdio.h>
#include <stdlib.h>

/* Write a program that prints its input
 * on word per line.
 */
int main()
{
    char *input = "Here, we go.  Testing Testing";
    while(*input){
        if( *input == ' ' || *input == '\t' || *input == '\n' ){
            printf("\n");
        }
        else {
            printf("%c", *input);
        }
        input++;
    }
    return 0;
}
