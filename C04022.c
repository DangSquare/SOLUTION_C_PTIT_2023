#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(a[j]<a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int max1=a[0];
	for(int i=0; i<n; i++)
	{
		if(a[i]>=max1)
		{
			max1=a[i];
		}
	}
	printf("%d ", max1);
	for(int i=0; i<n; i++)
	{
		if(a[i]<max1)
		{
			printf("%d", a[i]);
			break;
		}
	}
}