#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char a[100];
		gets(a);
		int check1=0;
		int check2=0;
		long long len=strlen(a);
		for(int i=0; i<len; i++)
		{
			int first=a[0]-'0';
			int last=a[len-1]-'0';
			if(first==2*last || last==2*first)
				check1=1;
			if(a[1]-'0'==a[len-2]-'0')
				check2=1;
		}
		if(check1==1 && check2==1)
			printf("YES");
		else
			printf("NO");
		printf("\n");
	}
}