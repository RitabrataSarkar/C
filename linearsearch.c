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

    for(int i=0;i<size;i++)
    {
        if(n==arr[i])
        {
            printf("Element match found at index %d",i);
            break;
        }
    }

    
}