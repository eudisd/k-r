#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

/* Problem: write a version of the binary search given
 * with only one test inside the loop and measure the
 * difference in run-time
 */

double microsec(void);
int binsearch(int x, int v[], int n);
void sort(int v[]);
const int ARRAY_SIZE = 1000000;
int main(void)
{
    int i;
    double t1, t2, diff;
    int *v = (int*)malloc(sizeof(int)*ARRAY_SIZE);
    sort(v);
   
    for(i = 0, diff=0.0; i < ARRAY_SIZE; i++){
        t1 = microsec();
        binsearch(1, v, ARRAY_SIZE);
        t2 = microsec();
        diff += (t2 - t1);
    }
    diff /= ARRAY_SIZE;
    printf("No optimization: %f\n", diff);
    
    for(i = 0, diff=0.0; i < ARRAY_SIZE; i++){
        t1 = microsec();
        binsearch_opt(1, v, ARRAY_SIZE);
        t2 = microsec();
        diff += (t2 - t1);
    }
    diff /= ARRAY_SIZE;
    printf("With optimization: %f\n", diff);
    return EXIT_SUCCESS;
}
double microsec(void)
{
    struct timeval t1;
    struct timezone tz;
    gettimeofday(&t1, &tz);
    return ((double)t1.tv_sec + (double)t1.tv_usec)/((double)1000000);
}
void sort(int v[])
{

}

int binsearch_opt(int x, int v[], int n)
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
