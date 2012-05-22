#include <stdio.h>
#include <stdlib.h>

/** Exercise - 4-12: 
* Adapt the ideas 'printd' to write a recursive version of itoa;  that is
* convert an integer into a string by calling a recursive routine.
**/

#define MAX_BUFFER_SIZE 200

char *itoa(int n, char s[]);
 
int main(void)
{
    int n = -2000;
    char buffer[MAX_BUFFER_SIZE];
    
    printf("Integer: %d\n", n);
    printf("Alpha: %s\n", itoa(n, buffer));

    return EXIT_SUCCESS;
}

char *itoa(int n, char s[])
{
    static int i = 0, j = 0;
    
    if (i >= MAX_BUFFER_SIZE){
        printf("\nBuffer too small to hold string representation!  Exiting...\n\n");
        exit(EXIT_FAILURE);
    }
    
    if ( n < 0 ) {
        s[i++] = '-';
        n = -n;
    }
    
    if ( n / 10 >= 0 ) {
        if ( n / 10 ) {
            j++;
            s = itoa(n / 10, s);
        }
        
        s[i] = '0' + n % 10;
        i++;
        
        return s;
        
        if ( n / 10 == 0){
            s[j] = '\0';
            return s;
        }

    } else {
        return "<error>";
    }
}