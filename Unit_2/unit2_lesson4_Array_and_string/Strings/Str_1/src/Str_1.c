/*
 ============================================================================
 Name        : String_EX1.c
 Author      : Zyad Elameir Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	int frq=0, diff=0;
	char text[100] ,ch,small='a',capital='A';

	diff = small - capital;

	printf("Enter a string: \n");
	fflush(stdin); fflush(stdout);
	gets(text);

	while(strlen(text)>100)
	{
		printf("ERROR! .. String length must not exceed 100\nPlease try again");
		printf("Enter a string: ");
		fflush(stdin); fflush(stdout);
		gets(text);
	}
	printf("Enter a character to find frequency: \n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	for(int i = 0 ; i<strlen(text) ; i++)
	{
		if(text[i] == ch || text[i]== ch+diff || text[i] == ch-diff){
			frq+=1;
		}
	}
	printf("Frequency of %c = %d",ch,frq);
	fflush(stdin); fflush(stdout);
	return 0;}

