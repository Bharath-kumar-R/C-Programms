#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100], str2[100];
	printf("Enter first string : ");
	gets(str1);
	printf("Enter second string : ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	printf("Eneterd strings are equal.\n");
	else
	printf("Entered strings are not equal.\n");
	return 0;
}
