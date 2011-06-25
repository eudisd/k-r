#include <stdio.h>
#include <stdlib.h>

/* Problem: rewrite the temparature conversion program in
 * section 1.2 to use a function for conversion.
 */


int main()
{
    fah_to_cel();
    return EXIT_SUCCESS;
}

int fah_to_cel(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while( fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

