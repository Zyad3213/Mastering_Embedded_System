#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j=0,nom,arr[50];ins,locat;
    printf("Enter no of element:\n");
    scanf("%d",&nom);

        for (j=0;j<nom;j++)
        {
            scanf("%d",&arr[j]);
        }
    printf("Enter no of element to be inserted:\n");
    scanf("%d",&ins);

    printf("Enter the location: \n");
    scanf("%d",&lacat);

    for(j=0;j<=nom;j++){
        if (j+1=locat){
            arr[j]=ins;
            printf("%d",arr[j]);
            j++;
        }
        printf("%d\t",arr[j]);
    }



    return 0;
}
