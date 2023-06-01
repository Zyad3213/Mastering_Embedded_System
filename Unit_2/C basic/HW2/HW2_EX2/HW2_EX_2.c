/*
 ============================================================================
 Name        : HW2_EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char choise ;
	printf ("Enter an alphabet : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choise);
	switch (choise)
	{
	case 'a' :
	case 'A' :
	case 'e' :
	case 'E' :
	case 'o' :
	case 'O' :
	case 'u' :
	case 'U' :
	case 'i' :
	case 'I' :

	{
		printf("%c is vowel.",choise);
	}
	break ;
	default :
		printf("%c is constant.",choise);
	}
	return EXIT_SUCCESS;
}
