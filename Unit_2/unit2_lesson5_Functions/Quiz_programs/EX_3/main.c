#include <stdio.h>
#include <stdlib.h>
int n;
int callfunc(int xxx[])
{
    int i;
    int rev[20];
    for(i=0;i<n;i++)
    {
    rev[i]=xxx[n-i-1];
    printf("%d",rev[i]);
    }
    return 0;
}
int main()
{
    int i,arr[20];
    printf("Input :\n");
    printf("Enter no of elements : "); fflush(stdin); fflush(stdout);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf(" %d",&arr[i]);
    }
    callfunc(arr);
    return 0;
}
