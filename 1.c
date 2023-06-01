#include <stdio.h>

int main()
{
    int num,numEntered,max=0,min=100;
    printf("How many number do you enter\n");
    scanf("%d",&num);


    for (;num>0;num--)
    {
        scanf ("%d",&numEntered);
        if(numEntered>max)
        {
           max=numEntered;
        }
        if(numEntered<min)
        {
           min=numEntered;
        }

    }
    printf("the maximum of all numbers = %d  \n",max);
    printf("the minimum of all numbers = %d  \n",min);
    return 0;
}
