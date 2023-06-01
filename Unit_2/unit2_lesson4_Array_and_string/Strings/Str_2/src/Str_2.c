/*
 ============================================================================
 Name        : Str_2.c
 Author      : Zyad
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
    int len=0;
    char text[100];

    printf("Enter a string: \n");
    fflush(stdin); fflush(stdout);
    gets(text);

   while(text[len] != '\0'){
    len++;
   }
     printf("length of string =%d",len);
return 0;
}


