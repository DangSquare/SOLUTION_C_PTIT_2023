#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
	char *x=(char*) a;
	char *y=(char*) b;
	return strcmp(x, y);
}

int main()
{
	int t;
	scanf("%d\n", &t);
	while(t--)
	{
		char s1[1005], s2[1005];
		gets(s1);
		gets(s2);
		char a[205][205], b[205][205];
		int m=0, n=0;
		char *token=strtok(s1, " ");
		while(token!=NULL)
		{
			strcpy(a[n], token);
			n++;
			token=strtok(NULL, " ");
		}
		token=strtok(s2, " ");
		while(token!=NULL)
		{
			strcpy(b[m], token);
			m++;
			token=strtok(NULL, " ");
		}
		qsort(a, n, sizeof(a[0]), cmp);
		for(int i=0; i<n; i++)
		{
			while(strcmp(a[i], a[i+1])==0)
				i++;
			int check=0;
			for(int j=0; j<m; j++)
			{
				if(strcmp(a[i], b[j])==0)
				{
					check=1;
					break;
				}
			}
			if(check==0)
				printf("%s ", a[i]);
		}
		printf("\n");
	}
}