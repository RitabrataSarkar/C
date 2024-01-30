#include<stdio.h>

int a=1,b=1,c;

int fibo(int n)
{
    if(n==1)    return 1;
    else if(n==2)   return 1;
    else    return fibo(n-1)+fibo(n-2);
}

int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    int ans=fibo(n);
    printf("%d",ans);
    return 0;

}