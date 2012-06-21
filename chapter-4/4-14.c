#include <stdio.h>

/* Define a macro swap(t, x, y) that interchanges two arguments of type t.  
 * (Block structure will help).
 */

#define swap(t, x, y) \
    t temp; \
    temp = x; \
    x = y; \
    y = temp;

int main(void)
{
    char x = 1, y = 2;
    printf("x: %d, y: %d", x, y);
    swap(char, x, y)
    printf("x: %d, y: %d", x, y);
    return 0;
}