#include <stdio.h>
#include <stdlib.h>

/** Exercise - 4-12: 
* Adapt the ideas 'printd' to write a recursive version of itoa;  that is
* convert an integer into a string by calling a recursive routine.
**/

char *itoa(int n);
 
int main(void)
{
    int n = 20;
    printf("Integer: %d\n", n);
    printf("Alpha: %s\n", itoa(n));
    
    return EXIT_SUCCESS;
}

char *itoa(int n)
{
    return NULL;
}