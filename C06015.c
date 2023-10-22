#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void chuanHoaHo(char c[])
{
	for(int i=0; i<strlen(c); i++)
	{
		c[i]=toupper(c[i]);
	}
}

void chuanHoa(char c[])
{
	c[0]=toupper(c[0]);
	for(int i=1; i<strlen(c); i++)
	{
		c[i]=tolower(c[i]);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	scanf("\n");
	while(n--)
	{
		char c[1005];
		gets(c);
		for(int i=0; i<strlen(c); i++)
			c[i]=tolower(c[i]);
		char a[205][205];
		int n=0;
		char *token=strtok(c, " ");
		while(token!=NULL)
		{
			strcpy(a[n], token);
			n++;
			token=strtok(NULL, " ");
		}
		for(int i=1; i<n; i++)
		{
			chuanHoa(a[i]);
			printf("%s", a[i]);
			if(i!=n-1)
				printf(" ");
		}
		chuanHoaHo(a[0]);
		printf(", %s", a[0]);
		printf("\n");
	}
}         