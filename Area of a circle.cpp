#include<stdio.h>
int main()
{
	int r;
	float PI=3.14,area;
	printf("Enter the Radius of the circle :\n");
	scanf("%d",&r);
	area=PI*r*r;
	printf("\nArea of a circle is : %f", area);
	return 0;
}
