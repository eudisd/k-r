#include <stdio.h>
#include <stdlib.h>


/* Problem: write a version of the binary search given
 * with only one test inside the loop and measure the
 * difference in run-time
 */

int binsearch(int x, int v[], int n);

int main(void)
{
    return EXIT_SUCCESS;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low + high)/2;
        if(x < v[mid])
            high = mid - 1;
        else if(x > v[mid])
            low = mid + 1;
        else
            return mid;
    }

    return -1;
}
