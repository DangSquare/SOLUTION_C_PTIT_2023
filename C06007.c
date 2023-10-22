#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>>

int mark[200]={0};

int main()
{
	char a[200];
	gets(a);
	char x[50][200];
	char *token=strtok(a, " ");
	int n=0;
	while(token!=NULL)
	{
		strcpy(x[n], token);
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
			if(strcmp(x[i], x[j])==0)
				mark[j]=0;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(mark[i]==1)
			printf("%s ", x[i]);
	}
}