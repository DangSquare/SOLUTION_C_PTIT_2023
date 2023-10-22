#include<stdio.h>
#include<math.h>

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
	while(t--)
	{
		int n;
		scanf("%d", &n);
		for(int i=2; i<=n/2; i++)
		{
			if(checkNt(i)==1 && checkNt(n-i)==1)
			{
				printf("%d %d ", i, n-i);
			}
		}
		printf("\n");
	}
}