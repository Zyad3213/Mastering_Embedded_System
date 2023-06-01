
#include "stdio.h"

int calcPower(int,int);
int main()
{
	int num,power,result;
	printf("Enter base number: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&num);
	printf("Enter positive integer: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&power);
	if(power<1)
	{
		printf("the number of power must be larger than 0 \n");
		return 0;
	}

	result=calcPower(num,power);
	printf("%d ^ %d = %d ",num,power,result);

	return 0;
}

int calcPower(int num_1,int power)
{
	if (power==1)
		return num_1;

	return (num_1*calcPower(num_1,power-1));
}
