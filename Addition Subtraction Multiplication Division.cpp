#include<stdio.h>
int main()
{
	int first, second, add, subtract, multiply;
	float divide;
	printf("Enter the two numbers to add, subtract, multiply and divide\n");
	scanf("%d%d",&first, &second);
	add=first+second;
	subtract=first-second;
	multiply=first*second;
	divide=first/(float)second;
	printf("Addition : %d\n",add);
	printf("Subtraction : %d\n",subtract);
	printf("Multiplicaton : %d\n",multiply);
	printf("Division : %.2f\n",divide);
	return 0;
}
