/*
 ============================================================================
 Name        : C basics unit2_lesson3   >>   HW1  >>  EX5
 Author      : Zyad ELamier Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char char_1 ;
	printf("Enter a character: "); //prints "Enter a character"
	fflush (stdout); fflush (stdin);
	scanf("%c",&char_1); //take the Value of a Character
	printf("ASCII value of %c = %d", char_1,char_1); /*  Print ASCII Value of a Character */
	return EXIT_SUCCESS;
}
