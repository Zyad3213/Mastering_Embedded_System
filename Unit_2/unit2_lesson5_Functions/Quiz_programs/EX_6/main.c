#include <stdio.h>
#include <stdlib.h>
int bin (int arr[])
{
   if(arr[3]==0)
    {
     printf("The 4th binary is = 0");
     return 0;
   }

    else
    {
    printf("The 4th binary is = 1");
    return 1;
}
}

int main()
{
    int i=0,arr[50],j=0,k=0;

    printf("Enter an integer number :");
    scanf("%d",&i);

    for(i;i>0;k++)
    {
     j=i%2;
     i=i/2;
     if (j!=0)
        arr[k]=1;
     else
        arr[k]=0;

    }
    bin(arr);
    return 0;
}
