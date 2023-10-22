#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

void sxTang(int a[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void sxGiam(int a[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]<a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int x=1; x<=t; x++)
	{
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);
		for(int i=0; i<n; i++)
			scanf("%d", &b[i]);
		sxTang(a, n);
		sxGiam(b, n);
		printf("Test %d:\n", x);
		int c[n*2];
		int ai=0, bi=0;
		for(int i=0; i<n*2; i++)
		{
			if(i%2==0)
			{
				c[i]=a[ai];
				ai++;
			}	
			else
			{
				c[i]=b[bi];
				bi++;
			}
		}
		for(int i=0; i<2*n; i++)
			printf("%d ", c[i]);
		printf("\n");
	}
}