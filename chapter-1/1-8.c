#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lines = 0;
    int blanks = 0;
    int tabs = 0;
    
    char input[1024] = "Here we go buddy\t\nbuddy man\t\n";
    int i;

    for(i = 0; i < 1024 && input[i] != '\0'; i++){
        if( input[i] == '\n' )
            lines++;
        else if (input[i] == ' ')
            blanks++;
        else if (input[i] == '\t')
            tabs++;
    }

    printf("Tabs: %d\nNewlines: %d\nTabs: %d\n", lines, blanks, tabs);
    return 0;
}
