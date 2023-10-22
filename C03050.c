#include<stdio.h>
#include<math.h>

int checkTT(int x1, int y1, int x2, int y2, int x3, int y3)
{
	if((x1-x2)*(y2-y3)==(x2-x3)*(y1-y2))
		return 1;
	return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int x[100005], y[100005];
	int check=0;
	for(int i=0; i<n-1; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	for(int i=0; i<n-3; i++)
	{
		if(checkTT(x[i], y[i], x[i+1], y[i+1], x[i+2], y[i+2])==0)
			check=1;
	}
	if(check==0)
		printf("Yes");
	else
		printf("No");
}