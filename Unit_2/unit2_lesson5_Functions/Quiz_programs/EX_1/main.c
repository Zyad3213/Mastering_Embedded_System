#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[10] ;
    char comp[]={"USERNAME"};
    printf("Enter a string \n");
    scanf("%s",&str);

    if (stricmp(str,comp)==0)
    printf("Yub");
    else
        printf("Naaaoo");

    return 0;
}
