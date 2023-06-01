/*
 ============================================================================
 Name        : HW2_EX8.c
 Author      : Zyad Elameir Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num_1 , num_2,result ;
	char alpha ;
	printf ("Enter operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alpha);
	printf ("\nEnter two operand : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num_1,&num_2);
	switch (alpha)
	{
	case '+' :
	{
		result=num_1+num_2;
		printf("%.1f + %.1f = %.1f",num_1,num_2,result);
	}
	break ;
	case '*' :
	{
		result=num_1*num_2;
		printf("%.1f * %.1f = %.1f",num_1,num_2,result);
	}
	break;
	case '/' :
	{
		result=num_1/num_2;
		printf("%.1f / %.1f = %.1f",num_1,num_2,result);
	}
	break;
	case '-' :
	{
		result=num_1-num_2;
		printf("%.1f - %.1f = %.1f",num_1,num_2,result);
	}
    break;
	default :
	{
		printf("Error!!!, you should chose one of these (/,*,-,+)");
	}break;
	}
	return EXIT_SUCCESS;
}
