#include<stdio.h>
#include<string.h>
#include<ctype.h>
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
		int check=0;
		for(int i=0; i<strlen(a); i++)
		{
			if(a[i]%2!=0)
				check++;
		}
		if(check==0 && a[0]==a[strlen(a)-1]==8)
			printf("YES");
		else
			printf("NO");
		printf("\n");
	}
}