#include<stdio.h>
#include<math.h>
int main()
{
	int input,firstNumber,lastNumber;
	printf("Enter at least a two digit number to add\n");
	scanf("%d",&input);
	lastNumber=input%10;
	firstNumber=input;
	while(firstNumber>=10)
	firstNumber/=10;
	printf("Addition of first and last digits of number : %d + %d = %d",firstNumber,lastNumber,firstNumber+lastNumber);
	return 0;
}
	
	
