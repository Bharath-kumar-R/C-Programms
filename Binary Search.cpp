#include<stdio.h>
int main()
{
	int c,first,last,middle,n,search,array[100];
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter %d numbers :\n",n);
	for(c=0;c<n;c++)
	scanf("%d",&array[c]);
	printf("Enter value to find :\n");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first-last)/2;
	while(first<=last)
	{
		if(array[middle]<search)
		first=middle+1;
		else if(array[middle]==search)
		{
			printf("The number %d is found at location %d.\n", search, middle+1);
			break;
		}
		else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	printf("NOT found! the number %d is not present in the list.\n", search);
	return 0;
}
