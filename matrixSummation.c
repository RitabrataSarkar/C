#include<stdio.h>

int n=4,m=3;

void sumMatrix (int A[][n], int B[][n], int sum[][n]) 
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("The summation matrix is: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return;
}

int main()
{
    int* ptr1;
    ptr1=&m;
    printf("Enter the value of m: ");
    scanf("%d",&*ptr1);
    int* ptr2;
    ptr2=&n;
    printf("Enter the value of n: ");
    scanf("%d",&*ptr2);
    printf("Enter 1st %d x %d matrix: \n",m,n);
    int mat1[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter 2nd %d x %d matrix: \n",m,n);
    int mat2[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    int sum[m][n];
    sumMatrix(mat1,mat2,sum);
    return 0;
}