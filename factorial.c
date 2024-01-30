#include<stdio.h>

int fact(int n)
{
    if(n==1)    
        return 1;
    return  n*fact(n-1);
}

int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    int ans=fact(n);
    printf("The factorial of the given number is : %d",fact(n));
    return 0;

}