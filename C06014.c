#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d\n", &t);
	while(t--)
	{
		char c[1005];
		gets(c);
		for(int i=0; i<strlen(c); i++)
			c[i]=tolower(c[i]);
		char *token=strtok(c, " ");
		token[0]=toupper(token[0]);
		printf("%s ", token);
		token=strtok(NULL, " ");
		while(token!=NULL)
		{
			token[0]=toupper(token[0]);
			printf("%s ", token);
			token=strtok(NULL, " ");
		}
		printf("\n");
	}
}