#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int mark[105]={0};

int main()
{
	char c[105];
	gets(c);
	char a[50][100];
	char *token=strtok(c, " ");
	int n=0;
	while(token != NULL)
	{
		strcpy(a[n], token);
		token=strtok(NULL, " ");
		n++;
	}
	for(int i=0; i<n; i++)
	{
		mark[i]=1;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(strcmp(a[i], a[j])==0)
				mark[j]=0;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(mark[i]==1)
		{
			printf(a[i]);
			printf(" ");
		}
	}
}