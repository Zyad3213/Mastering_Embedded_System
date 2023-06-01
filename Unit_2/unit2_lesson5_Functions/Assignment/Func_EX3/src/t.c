#include <stdio.h>
#include<string.h>
void revtest(char[]);
void main()
{
  char str[100];
  printf("Enter a sentence : ");
  fflush(stdin);  fflush(stdout);
  gets(str);
  revtest(str);
}
 void revtest(char test[])
 { static i=0;
     printf("%c",test[strlen(test)-i]);
     fflush(stdin);  fflush(stdout);
     i++;
     if(i>strlen(test))
     {
         i=strlen(test);
          test='\0';
     }
     revtest(test);
 }
