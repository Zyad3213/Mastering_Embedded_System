/*
 ============================================================================
 Name        : C basics unit2_lesson3   >>   HW1  >>  EX7
 Author      : Zyad ELamier Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num_1=0 , num_2=0 ;

	printf("Enter value of a: ");        //prints "Enter the first value"
	fflush (stdout); fflush (stdin);
	scanf("%f",& num_2);                 //Enter the first value
	printf("Enter value of b: ");       //prints "Enter the second value"
	fflush (stdout); fflush (stdin);
	scanf("%f",& num_1);                //Enter the second value

	printf("After swapping, value of a = %f\n", num_1); /* prints the swap 1 */
	printf("After swapping, value of b = %f\n", num_2); /* prints the swap 2 */

	return EXIT_SUCCESS;
}
