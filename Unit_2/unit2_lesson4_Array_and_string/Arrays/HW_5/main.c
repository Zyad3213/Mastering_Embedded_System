#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j=0,nom=0,arr[50],sear=0;
    printf("Enter no of element:\n");
    scanf("%d",&nom);

        for (j=0;j<nom;j++)
        {
            scanf("%d",&arr[j]);
        }
    printf("Enter the element to be searched:\n");
    scanf("%d",&sear);

    for(j=0;j<nom;j++){
        if (arr[j]==sear){
            printf("Number found at the location = %d\t",j+1);
        }
    }



    return 0;
}
