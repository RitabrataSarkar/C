#include<stdio.h>
#include<stdlib.h>
int main () 
{
    int *A = (int *)malloc(10 * sizeof(int)), allocsize = 10, n = 0, x;
    printf("Keep on entering +ve integers. Enter 0 or a -ve integer to stop.\n");
    while (1) 
    {
        printf(“Next integer: ”); 
        scanf(“%d”, &x); 
        if (x <= 0) break; 
        ++n;
        if (n > allocsize) 
        { 
            allocsize += 10;
            A = (int *) realloc(A, allocsize * sizeof(int)); 
        } 
        A[n-1] = x; 
    }
    A = (int *) realloc(A, n * sizeof(int)); allocsize = n; // Process the integers read from the user ...
    free(A);
    return 0;
}