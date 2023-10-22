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

int main()
{
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int max=0, hang;
	for(int i=0; i<n; i++)
	{
		int cnt=0;
		for(int j=0; j<n; j++)
		{
			if(checkNt(a[i][j])==1)
				cnt++;
		}
		if(cnt>max)
		{
			max=cnt;
			hang=i;
		}
	}
	printf("%d\n", hang+1);
	for(int i=0; i<n; i++)
	{
		if(checkNt(a[hang][i])==1)
		{
			printf("%d ", a[hang][i]);
		}
	}
}