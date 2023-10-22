#include<stdio.h>
#include<math.h>

int mark[100005]={0};

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
	int t;
	scanf("%d", &t);
	for(int x=1; x<=t; x++)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n-1; j++)
			{
				if(a[j]>a[j+1])
				{
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			mark[a[i]]++;
		}
		printf("Test %d:\n", x);
		for(int i=0; i<n; i++)
		{
			if(mark[a[i]]>0 && checkNt(a[i])==1)
			{
				printf("%d xuat hien %d lan\n", a[i], mark[a[i]]);
				mark[a[i]]=0;
			}
		}
		printf("\n");
	}
}