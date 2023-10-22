#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char a[505];
		gets(a);
		int sum=0;
		for(int i=0; i<strlen(a); i++)
		{
			sum+=a[i];
		}
		if(sum%10==0 && a[0]==a[strlen(a)-1]==8)
			printf("YES");
		else
			printf("NO");
		printf("\n");
	}
}