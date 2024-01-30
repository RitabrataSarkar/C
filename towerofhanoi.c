#include<stdio.h>

void hanoi(int n, char s,char h, char d)
{
    if(n==1)
    {
        printf("Transfer disk %d from %c to %c\n",n,s,d);
        return;
    }
    hanoi(n-1,s,d,h);
    printf("Transfer disk %d from %c to %c\n",n,s,d);
    hanoi(n-1,h,s,d);
}

int main()
{
    printf("Enter value of n: ");
    int n;
    scanf("%d",&n);
    hanoi(n,'S','H','D');
    return 0;
}