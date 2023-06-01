/*
 ============================================================================
 Name        : C basics unit2_lesson3   >>   HW2  >>  EX4
 Author      : Zyad ELamier Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num ;

	printf("Enter a number : ");        //prints "Enter the first value"
	fflush (stdout); fflush (stdin);
	scanf("%f",&num);                 //Enter the first value

	if (num>0)
	{
		printf("%f is positive.",num);
	}
		else
	{
			if (num<0)
				printf("%f is negative.",num);
			else
				printf("You enter zero.");

	}
	return EXIT_SUCCESS;
}
