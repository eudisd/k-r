#include <stdio.h>
#include <stdlib.h>

/* Problem: Write a program to print a histogram of 
 * the frequencies of different characters in its input.
 */

int main()
{
    char *input = "This is my input";
    /* This solution is ascii based only */
    char freq[256];
    int i;
    for(i = 0; i < 256; i++){
        freq[i] = 0;
    }
    char *start = input;

    while(*input){
        freq[*input]++;    
        input++;
    }
    while(*start){
        if( freq[*start] > 0 ){
            printf("%c: %d\n", *start, freq[*start]);
        }
        start++;
    }
    
}
