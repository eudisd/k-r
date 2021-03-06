#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

/* Problem: write a version of the binary search given
 * with only one test inside the loop and measure the
 * difference in run-time
 */

double microsec(void);
int binsearch(int x, int v[], int n);
void sort(int v[], int n);
void swap(int *a, int *b);
const int ARRAY_SIZE = 1000000;
const int AVG = 30;
int main(void)
{
    int i;
    double t1, t2, diff;
    int *v = (int*)malloc(sizeof(int)*ARRAY_SIZE);
    sort(v, ARRAY_SIZE);
    
    for(i = 0, diff=0.0; i < AVG; i++){
        t1 = microsec();
        binsearch(1, v, ARRAY_SIZE);
        t2 = microsec();
        diff += (t2 - t1);
    }
    diff /= AVG;
    printf("No optimization: %f\n", diff);
    
    for(i = 0, diff=0.0; i < AVG; i++){
        t1 = microsec();
        binsearch_opt(1, v, ARRAY_SIZE);
        t2 = microsec();
        diff += (t2 - t1);
    }
    diff /= AVG;
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
void sort(int v[], int n)
{
    int i, j, sorted = 0;
    while(!sorted){
        // First check if it's sorted
        for(j = 0; j < n - 1; j++){
            if(v[j] > v[j + 1]){
                sorted = 0;
                break;
            } else {
                sorted = 1;
            }
        }

        for(i = 0; i < n - 1; i++){
            if(v[i] > v[i + 1])
               swap(&v[i], &v[i + 1]);

        }
    }
}

void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
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
