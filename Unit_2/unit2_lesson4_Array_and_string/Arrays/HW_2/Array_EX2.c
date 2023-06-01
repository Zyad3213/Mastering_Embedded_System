/*
 ============================================================================
 Name        : HW3_EX2.c
 Author      : Zyad Elameir Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i , num ;
	float  sum,avg,ar_1 [100];

	printf("Enter the numbers of data:\n");
fflush(stdin); fflush(stdout);
    scanf("%d",&num);

	for(i=0;i<num;i++)
        {
		printf("%d. Enter number :",i+1);
fflush(stdin); fflush(stdout);
		scanf("%f",&ar_1[i]);
		sum+=ar_1[i];
        }
avg =sum/num;
printf("Average = %.2f \n",avg);

	return 0;
}
