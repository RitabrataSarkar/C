#include<stdio.h>

int main()
{
    printf("Enter the size of the array: ");
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to search: ");
    int n;
    scanf("%d",&n);

    int mid,l=0,r=size-1;
    while(r-l!=0)
    {
        mid=(l+r)/2;
        if(arr[mid]==n)
        {
            printf("Element match found at index %d",mid);
            break;
        }
        else if(arr[mid]>n)
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
}
