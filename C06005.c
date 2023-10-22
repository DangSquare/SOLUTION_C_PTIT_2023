#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int mark[200]={0};

void Tolower(char s[])
{
	for(int i=0; i<strlen(s); i++)
	{
		s[i]=tolower(s[i]);
	}
}

int main()
{
	char c[1000];
	gets(c);
	Tolower(c);
	char a[50][100];
	int n=0;
	char *token=strtok(c, " ");
	while(token!=NULL)
	{
		strcpy(a[n], token);
		token=strtok(NULL, " ");
		n++;
	}
	for(int i=0; i<n; i++)
	{
		if(mark[i]==0)
		{
			int cnt=1;
			for(int j=i+1; j<n; j++)
			{
				if(strcmp(a[i], a[j])==0)
				{
					cnt++;
					mark[j]=1;
				}
			}
			printf("%s %d\n", a[i], cnt);
		}
	}
}