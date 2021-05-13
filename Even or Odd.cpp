#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer :");
	scanf("%d",&n);
	if((n/2)*2==n)
	printf("The number is Even\n");
	else
	printf("The number is Odd\n");
	return 0;
}
