/*
 ============================================================================
 Name        : Func_EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int x);
int fact =1;

int main()
{
int num_1 ;
printf("Enter an positive integer: ");
 fflush(stdin);  fflush(stdout);
scanf("%d",&num_1);
  printf("Factorial of %d = %d",num_1,factorial(num_1));
    return 0;
}
int factorial(int x)
{
    fact*=x;
  x--;
    if (x>1)
        factorial(x);
   return fact;

}
