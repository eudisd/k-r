#include <stdio.h>
#include <stdlib.h>

/** Exercise - 4-12: 
* Adapt the ideas 'printd' to write a recursive version of itoa;  that is
* convert an integer into a string by calling a recursive routine.
**/

char *itoa(int n, char s[]);
 
int main(void)
{
    int n = 20;
    char buffer[200];
    
    printf("Integer: %d\n", n);
    printf("Alpha: %s\n", itoa(n, buffer));

    return EXIT_SUCCESS;
}

char *itoa(int n, char s[])
{
    static int i = 0;
    if (i >= MAX_BUFFER_SIZE){
        printf("\nBuffer too small to hold string representation!  Exiting...\n\n");
        exit(EXIT_FAILURE);
    }
    if (n < 0) {
        n = -n;
    }
    
    if (n / 10) {
        s[i] = itoa(n/10);
    }
    

}