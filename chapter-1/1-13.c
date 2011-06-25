#include <stdio.h>
#include <stdlib.h>

/* Problem: Write a program to print the histogram
 * of the lengths of words in its input.  It is easy
 * two draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging.
 */

void draw_hist(int *iter, int *count);

int main()
{
    char *input = "This is my input";
    int count = 0, iter = 0;
    while(*input){
       
        if(*input == ' ' || *input == '\n' || *input == '\t'){
            draw_hist(&iter, &count);
        }
        else {
            count++;
            printf("%c", *input);  
        }
        input++;
        if( !(*input) && count > 0 ){
            draw_hist(&iter, &count);
        }

    }
}
void draw_hist(int *iter, int *count){
    printf(":");
    while(*iter < *count){
        printf("=");
        (*iter) = (*iter) + 1;
    }
    printf("\n");
    *count = 0;
    *iter = 0;
}

