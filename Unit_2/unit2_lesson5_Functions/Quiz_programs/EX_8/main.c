#include <stdio.h>
#include <stdlib.h>
int xxx(x,y)
{
   int result=0;
   if(x==y)
    result=6;
   else
    printf("Element not found in the array");
   return result;
}

int main()
{
    int bit ,ch,index;
    int arr[]={1,2,3,4,5,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    bit=arr[n-1];
    printf("The number is : ");
    scanf("%d",&ch);
    index=xxx(bit,ch);
    if (index>0)
    printf("The last occurrence of element %d is located at index %d",ch, index);

    return 0;
}
