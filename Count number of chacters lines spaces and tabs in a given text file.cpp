#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int nol=0,nolt=0,nos=0,noc=0;
	fp=fopen("path.txt","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		noc++;
		if(ch==' ')
		nos++;
		if(ch=='\n')
		nol++;
		if(ch=='\t')
		nolt++;
	}
	fclose(fp);
	printf("\n Number of characters = %d",noc);
	printf("\n Number of spaces = %d",nos);
	printf("\n Number of tabs = %d",nolt);
	printf("\n Number of lines = %d",nol);

}
