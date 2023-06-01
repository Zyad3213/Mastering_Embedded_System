/*
 ============================================================================
 Name        : Str_3.c
 Author      : Zyad
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
int main()
{
    int i=0, n=0;
    char text[100],text_r[100];

    printf("Enter a string: \n");
    fflush(stdin); fflush(stdout);
    gets(text);

    n=strlen(text);

while(n>=0){

    text_r[i+1]=text[n-1];
    n--;
    i++;
    }
      printf("%s",text_r[i]);
return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {

char strng[100],strng_r[100];
int n=0 , i=0 ;
printf("Enter a string : ");
scanf("%s",strng);
while(strlen(strng)>100)
    {
    printf("ERROR! .. String length must not  exceed 100\nPlease try again");
    printf("Enter a string : ");
    scanf("%s",strng);
    }
n=strlen(strng);

for(int i = n-1 ; i>=0 ; i--)
    {
    strng_r[i]=strng[n-1-i];
    }
printf("Reversed string is : ");

for(int i = 0 ; i<strlen(strng) ; i++){
    printf("%c",strng_r[i]);
}

}
