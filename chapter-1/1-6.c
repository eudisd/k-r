#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    while( b = (getchar() != EOF) ){
        printf("\nVerify: %d\n", b);
    }
}
