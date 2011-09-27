#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *s);

int main(){
    
    char *line = "Here goes";
    
    printf("%s\n", line);
    reverse(line);
    printf("%s\n", line);
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
