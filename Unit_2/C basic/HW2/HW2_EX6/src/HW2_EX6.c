/*
 ============================================================================
 Name        : HW2_EX6.c
 Author      : Zyad Elameir Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int user_in , sum=0 ;
	printf ("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&user_in);
    while (user_in)
    {
    	sum+=user_in;
    	user_in--;
    }
    printf ("Sum = %d",sum);
	return EXIT_SUCCESS;
}
