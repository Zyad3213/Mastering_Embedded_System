#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int  n1 ,n2 ,i , j , ar_1[100][100], t[100][100];

	printf("Enter rows and column of matrix :\n");
    fflush(stdin); fflush(stdout);
    scanf("%d %d",&n1,&n2);
    printf("Enter element of matrix :");

	for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
            printf("Enter element a%d%d :\n",i+1,j+1);
            fflush(stdin); fflush(stdout);
              scanf("%d",&ar_1[i][j]);
            }
        }
    printf("Enterd matrix:");
    fflush(stdin); fflush(stdout);
        for(i=0;i<n1;i++)
        {
            printf("\n");
            for(j=0;j<n2;j++)
            {
            printf("%d\t",ar_1[i][j]);
            fflush(stdin); fflush(stdout);
            }
        }
    printf("\nTranspose of matrix:");
    fflush(stdin); fflush(stdout);
        for(i=0;i<n1;i++)
        {
            printf("\n");
            for(j=0;j<n2;j++)
            {
                t[j][i]=ar_1[i][j];

            }
        }
        for(j=0;j<n2;j++)
        {
            printf("\n");
            for(i=0;i<n1;i++)
            {
               printf("%d\t",t[j][i]);

            }
        }

	return 0;
        }
