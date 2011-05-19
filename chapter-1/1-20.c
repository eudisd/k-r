#include <stdio.h>
#include <stdlib.h>

/*  Problem:
 *  Write a program that replaces tabs in the input with
 *  the proper number of blanks to space to the next tab
 *  stop.  Assume a fixed set of tab stops, say every n
 *  columns.  Should n be a variable or symbolic parameter
 */

#define N 3
#define SPACE 8

int main(int argc, char *argv[])
{
    char c;
    FILE *f = fopen(argv[1], "rb");
    if(!f){
        fprintf(stderr, "Error opening file! Exiting\n");
        exit(EXIT_FAILURE);
    }
    while ( (c = getc(f)) != EOF ){
        if (c == '\t'){
            int i;
            for(i = 0; i < SPACE; i++){
                printf("%c", c);
            }
        }
        printf("%c", c);
    }
    fclose(f);
    return EXIT_SUCCESS;
}

