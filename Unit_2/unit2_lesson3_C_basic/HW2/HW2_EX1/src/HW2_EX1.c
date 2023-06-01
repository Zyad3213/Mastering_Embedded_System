/*
 ============================================================================
 Name        : C basics unit2_lesson3   >>   HW2  >>  EX1
 Author      : Zyad ELamier Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num_1=0  ;

	printf("Enter an integer you want to check : ");        //prints "Enter the first value"
	fflush (stdout); fflush (stdin);
	scanf("%d",& num_1);                 //Enter the first value

if (num_1%2==1)
{
printf ("%d is odd.",num_1);
}
else
{
printf("%d is even.",num_1)	;
}

	return EXIT_SUCCESS;
}
