#include<stdio.h>
int main()
{
    printf("Enter number of rows: ");
    int r,c;
    scanf("%d",&r);
    printf("Enter number of coloums: ");
    scanf("%d",&c);
    int mat[r][c];
    printf("Enter the matrix elements: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int tr[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            tr[j][i]=mat[i][j];
        }
    }
    printf("The transpose of the matrix is: \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",tr[i][j]);
        }
        printf("\n");
    }
    return 0;
}