#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *ptr;
    ptr=(char*)calloc(5,sizeof(char));
    // ptr[0]='R';
    // ptr[1]='I';
    // ptr[2]='T';
    // ptr[3]='O';
    // ptr[4]='S';
    for(int i=0;i<5;i++)
    {
        printf("%c \n",ptr[i]);
    }
    free(ptr);
    ptr=realloc(ptr,8);
    return 0;
}