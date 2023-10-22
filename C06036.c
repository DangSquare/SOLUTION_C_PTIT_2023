#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[100005];
	gets(a);
	int cnt=0;
	for(int i=0; i<strlen(a)/2; i++)
	{
		if(a[i]==a[strlen(a)-1-i])
		{
			cnt++;
		}
	}
	printf("%d", 2*cnt-1);
}