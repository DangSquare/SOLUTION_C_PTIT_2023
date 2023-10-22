#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

marka[1005]={0};
markb[1005]={0};

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n], b[m];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		marka[a[i]]=1;
	}
	for(int i=0; i<m; i++)
	{
		scanf("%d", &b[i]);
		markb[b[i]]=1;
	}	
	for(int i=0; i<1005; i++)
	{
		if(marka[i]==1 && markb[i]==1)
			printf("%d ", i);
	}
	printf("\n");
	for(int i=0; i<1005; i++)
	{
		if(marka[i]==1 && markb[i]==0)
			printf("%d ", i);
	}
	printf("\n");
	for(int i=0; i<1005; i++)
	{
		if(marka[i]==0 && markb[i]==1)
			printf("%d ", i);
	}	
}