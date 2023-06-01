#include <stdio.h>
#include <stdlib.h>
int clear(int yyy[])
{
   int i=0, dec=0,mult;

    for(i=0;yyy[i];i++)
    {
    	while (yyy[i]==1)
    	     {
             for (mult=1,i=0;;i++)
             {
              mult=mult*i;
              dec=dec+mult;
             }
             }
    }
return dec;
}
int main()
{
int num=0,bit=0,k=0,i=0,j=0,arr[16];
printf("Enter an integer number: ");
scanf("%d", &i);

for(i;i>0;k++)
    {
     j=i%2;
     i=i/2;
     if (j!=0)
        arr[k]=1;
     else
        arr[k]=0;
    }

printf("Enter the specific bit you wanna clear ");
scanf("%d", &bit);
printf("%d",clear(arr));
  return 0;
}
