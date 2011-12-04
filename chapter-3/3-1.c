#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

/* Problem: write a version of the binary search given
 * with only one test inside the loop and measure the
 * difference in run-time
 */

double microsec(void);
int binsearch(int x, int v[], int n);

int main(void)
{
    int i;
    double t1, t2, diff=0;
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    for(i = 0; i < 30; i++){
        t1 = microsec();
        binsearch(1, v, 10);
        t2 = microsec();
        diff += (t2 - t1);
    }
    diff /= 30;
    printf("No optimization: %f\n", diff);
    return EXIT_SUCCESS;
}
double microsec(void)
{
    struct timeval t1;
    struct timezone tz;
    gettimeofday(&t1, &tz);
    return ((double)t1.tv_sec + (double)t1.tv_usec)/((double)1000000);
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
