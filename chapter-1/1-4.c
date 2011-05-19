#include <stdio.h>
#include <stdlib.h>

/* Problem:
 * Write a program to print the corresponding
 * Celsius to Fahrenheit table.
 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("\nTable heading\n");
    while(celsius <= upper){
        fahr = (9.0/5.0) * (celsius + 32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
