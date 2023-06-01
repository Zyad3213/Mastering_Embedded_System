#include <stdio.h>
#include <stdlib.h>

int detect (x)
{
    while(x>3)
        x=x/3;
    if(x!=3)
        return 0 ;
    else
        return 1 ;
}
 int main()
{
    int i=0,r;
    printf("Enter an integer number :");
    scanf("%d",&i);
    r=detect(i);
    printf(">>%d",r);
    return 0;
}
