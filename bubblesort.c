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

    for(int i=size-1;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Sorted array:  ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}