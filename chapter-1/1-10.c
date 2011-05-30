#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *input = "here we \t <-tab, \b <-backspace, \\ <-backslash";

    int i;
    for(i = 0; i < strlen(input); i++){
        if( input[i] == '\t'){
            printf("\\t");
        }
        else if( input[i] == '\b'){
            printf("\\b");
        }
        else if( input[i] == '\\'){
            printf("\\");
        }
        else {
            printf("%c", input[i]);
        }
    }

    return EXIT_SUCCESS;
}
