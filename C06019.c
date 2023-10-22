#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void chuanHoa(char c[])
{
	for(int i=0; i<strlen(c); i++)
		c[i]=tolower(c[i]);
}

int main() 
{ 
	char c[1005];
	gets(c);
	char a[50][1005];
	int n=0;
	char *token=strtok(c, " ");
	while(token!=NULL)
	{
		strcpy(a[n], token);
		n++;
		token=strtok(NULL, " ");
	}
	for(int i=0; i<n-1; i++)
	{
		chuanHoa(a[i]);
		printf("%c", a[i][0]);
	}
	chuanHoa(a[n-1]);
	printf("%s", a[n-1]);
	printf("@ptit.edu.vn");
}