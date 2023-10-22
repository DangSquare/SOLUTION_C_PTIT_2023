#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		long long tich=1;
		for(int i=2; i<=n; i++)
		{
			while(n%i==0)
			{
				if((n/i)%i != 0)
				{
					tich*=i;
				}
			}
		}
		printf("%lld\n", tich);
	}
}