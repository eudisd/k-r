#include <stdio.h>
#include <stdlib.h>
/* Problem: Write a program to "fold" long input lines into two or more
 * shorter lines after the last non-blank character that occurs before the
 * n-th column of input.  Make sure your program does something intelligent
 * with very long lines, and if there are no blanks or tabs before the
 * specified column. 
 */

#define N 64

int main(){
    
    char c, i = 0;
    while((c = getchar()) != EOF){
        if(i % (N + 1) == 0){
            printf("\n");
        } else {
            printf("%c", c);
        }
        i++;
    }
    return EXIT_SUCCESS;
}
