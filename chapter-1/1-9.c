#include <stdio.h>
#include <stdlib.h>

/* Problem: 
 * Write a program to copy its input to its 
 * output, replacing each string of one or more
 * blanks by a single blank
 */

#define BUF_SIZE 1024

int main()
{
    char input[BUF_SIZE] = "\nSample input      here\n";
    int i;

    for(i = 0; i < BUF_SIZE; i++){
        if( input[i] == ' ' ){
            while( input[i] == ' ' ){
                i++;
            }
            printf(" %c", input[i]);
        }
        else {
            printf("%c", input[i]);
        }
    }
}
