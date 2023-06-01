/*
 ============================================================================
 Name        : Fuanc_Ex1.c
 Author      : Zyad
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int primeintervals(int num);
int i,j;
int flag=0;

int main()
{
     int num1,num2;
     printf("Enter two numbers(intervals):");
     fflush(stdin);  fflush(stdout);
     scanf("%d %d",&num1,&num2);
     printf("Prime numbers between %d and %d are :",num1,num2);

     for(i=num1+1;i<num2;i++){
if(primeintervals(i))
{
        printf("%d",i);
        printf("\t"); }
     }

    return 0;
}
int primeintervals(int num)
{
    for(j=2;j<10;j++){
    if(num%j == 0){
    if(num==j)
       return 1;


    }
}
}

