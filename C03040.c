#include<stdio.h>
#include<math.h>

long long sumTs(long long n)
{
	long long sum1=0;
	int i=2;
	while(n>1)
	{
		if(n%i==0)
		{
			sum1+=i;
			n/=i;
		}
		else
			i++;
	}
	return sum1;
}

long long sumCs(long long n)
{
	long long sum2=0;
	while(n!=0)
	{
		int m=n%10;
		sum2+=m;
		n/=10;
	}
	return sum2;
}

void check(int n)
{
	if(sumTs(n)==sumCs(n))
		printf("YES");
	else
		printf("NO");	
}

int main()
{
	long long n;
	scanf("%lld", &n);
	check(n);
}