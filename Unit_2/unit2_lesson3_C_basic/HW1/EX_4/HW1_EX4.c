/*
 ============================================================================
 Name        : C basics unit2_lesson3   >>   HW1  >>  EX4
 Author      : Zyad ELamier Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num_1 , num_2 ;
	printf("Enter two numbers: "); //prints "Enter two numbers"
	fflush (stdout); fflush (stdin);
	scanf("%f %f",&num_1,&num_2); //take from user two number
	printf("Product: %f", num_1*num_2); /* prints Product:the process */
	return EXIT_SUCCESS;
}
