#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char a[205];
		gets(a);
		int cnt=0;
		char *token=strtok(a, " ");
		while(token!=NULL)
		{
			cnt++;
			token=(NULL, " ");
		}
		printf("%d\n", cnt);
	}
}