#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
void reverse(char *s);

int main(){
    
    char *line;
    int max = MAX;

    line = (char*)malloc(sizeof(char)*max);
    
    while(1){
        getline(&line, &max, stdin);
        printf("%s\n", line);
        reverse(line);
        printf("%s\n", line);
        if(strlen(line) <= 1){
            break;
        }
    }
    return EXIT_SUCCESS;
}

void reverse(char *s){
    int tmp, i, len = strlen(s);
    for(i = 0; i < len/2; i++){
        tmp = s[i];
        s[i] = s[(len - 1) - i];
        s[(len - 1) - i] = tmp;
    }
}
