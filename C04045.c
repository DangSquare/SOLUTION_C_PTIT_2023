#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int x;
		int i=0, chan=0, le=0;
		char y;
		do
		{
			scanf("%d", &x);
			if(x%2==0)
				chan++;
			else
				le++;
			i++;
			scanf("%c", &y);
		}
		while(y!='\n');
		if(i%2==0 && chan>le)
			printf("YES");
		else if(i%2!=0 && le>chan)
			printf("YES");
		else
			printf("NO");
		printf("\n");
	}
}