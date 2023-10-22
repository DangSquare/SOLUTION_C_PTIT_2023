#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int checkNt(int n)
{
	if(n<2)
		return 0;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int nt[400];

void init()
{
	int i=0, cnt=0;
	while(cnt<400)
	{
		if(checkNt(i)==1)
		{
			nt[cnt]=i;
			cnt++;
		}
		i++;
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int x=1; x<=t; x++)
	{
		init();
		int n;
		scanf("%d", &n);
		int a[n][n], cnt=0;
		int h1=0, h2=n-1, c1=0, c2=n-1;
		while(c1<=c2 && h1<=h2)
		{
			for(int i=c1; i<=c2; i++)
			{
				a[h1][i]=nt[cnt];
				cnt++;
			}
			h1++;
			for(int i=h1; i<=h2; i++)
			{
				a[i][c2]=nt[cnt];
				cnt++;
			}
			c2--;
			if(c1<=c2)
			{
				for(int i=c2; i>=c1; i--)
				{
					a[h2][i]=nt[cnt];
					cnt++;
				}
				h2--;
			}
			if(h1<=h2)
			{
				for(int i=h2; i>=h1; i--)
				{
					a[i][c1]=nt[cnt];
					cnt++;
				}
				c1++;
			}
		}
		printf("Test %d:\n", x);
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}