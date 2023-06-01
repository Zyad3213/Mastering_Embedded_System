/*
 ============================================================================
 Name        : HW2_EX5.c
 Author      : Zyad Elameir Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char choise ;
	printf ("Enter an character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choise);
    if ((choise>=65 && choise<=90) || (choise>=97 && choise<=120))
    	printf("%c is not an alphabet.",choise);
	else
		printf("%c is an alphabet.",choise);
	return EXIT_SUCCESS;
}
