/*
 ============================================================================
 Name        : HW2_EX7.c
 Author      : Zyad Elameir Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int user_in , factor=1 ;
	printf ("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&user_in);
    if (user_in>0)
    {

	   while (user_in)
    {
    	factor*=user_in;
    	user_in--;
    }
    printf ("Factorial = %d",factor);
    }
    else
    	printf ("Error!!! factorial of negative number doesn't exist.");
	return EXIT_SUCCESS;
}
