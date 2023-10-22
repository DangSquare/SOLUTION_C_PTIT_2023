#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int cmp(char a[], char b[])
{
	int n1=strlen(a), n2=strlen(b);
	if(n1!=n2)
		return 0;
	for(int i=0; i<strlen(a); i++)
	{
		if(tolower(a[i])!=tolower(b[i]))
			return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	for(int x=1; x<=t; x++)
	{
		char s1[1005], s2[25];
		gets(s1);
		gets(s2);
		char *token=strtok(s1, " ");
		printf("Test %d: ", x);
		while(token!=NULL)
		{
			if(cmp(token, s2)==0)
			{
				printf("%s ", token);
			}
			token=strtok(NULL, " ");
		}
		printf("\n");
	}
}