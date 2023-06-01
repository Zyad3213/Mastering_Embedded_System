/*
 ============================================================================
 Name        : HW3_EX1.c
 Author      : Zyad Elameir Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i , j ,k ;
	float ar_1 [2][2];
	float ar_2 [2][2];
	printf("Enter the element of 1st matrix \n");
fflush(stdin); fflush(stdout);

	for(i=0;i<2;i++)
        {
		for(j=0;j<2;j++)
            {
            printf("Enter a[%d,%d]: \t",i+1,j+1);
            fflush(stdin); fflush(stdout);
			scanf("%f",&ar_1[i][j]);
            }
        }

    printf("\n");
    printf("Enter the element of 1st matrix \n");
    fflush(stdin); fflush(stdout);


    for(i=0;i<2;i++)
        {
		for(j=0;j<2;j++)
            {
            printf("Enter a[%d,%d]: \t",i+1,j+1);
            fflush(stdin); fflush(stdout);
			scanf("%f",&ar_2[i][j]);
            }
        }
        printf("\n");

printf("Sum Of Matrix: \n");
for(i=0;i<2;i++)
        {
	 printf("\n");
		for(j=0;j<2;j++)
            {

            for (k=0;k<1;k++)
                {

                  printf("%.1f \t",(ar_1[i][j]+ar_2[i][j]));
                }
            }
        }
	return 0;
}
