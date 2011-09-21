#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_INPUT 80

char *remove_blanks(char *line);

int main(int argc, char **argv){

    char *line = (char*)malloc(sizeof(char)*MAX_INPUT);
    int max = MAX_INPUT; 
    
    while( *line != EOF ){
        getline(&line, &max, stdin);
        printf("%s\n", line);
        printf("Size: %d\n", strlen(line));
        if(strlen(line) <= 1){
            break;
        }
    }
    printf("Old Line Length: %d\n", (size_t)strlen(line));
    line = remove_blanks(line);
    printf("New Line Length: %d\n", (size_t)strlen(line));
    printf("Line: %s\n", line);

    return EXIT_SUCCESS;
}

char *remove_blanks(char *line){
    return NULL;
}
