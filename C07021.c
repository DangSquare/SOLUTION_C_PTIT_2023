#include<stdio.h>
#include<string.h>
#include<math.h>

struct sv
{
	int msv;
	char name[1000];
	float dA, dB, dC;
}; 

struct sv SinhVien[1000];
int n;

void task1()
{
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		SinhVien[i].msv=i;
		scanf("\n");
		gets(SinhVien[i].name);
		scanf("%f %f %f", &SinhVien[i].dA, &SinhVien[i].dB, &SinhVien[i].dC);
	}
	printf("%d\n", n);
}

void task2()
{
	int msv;
	scanf("%d", &msv);
	scanf("\n");
	gets(SinhVien[msv].name);
	scanf("%f %f %f", &SinhVien[msv].dA, &SinhVien[msv].dB, &SinhVien[msv].dC);
	printf("%d\n", 	msv);
}

void task3()
{
	for(int i=n; i>=1; i--)
	{
		printf("%d %s %.1f %.1f %.1f\n", i, SinhVien[i].name, SinhVien[i].dA, SinhVien[i].dB, SinhVien[i].dC);
	}
}

int main()
{
	int t;
	while(t!=3)
	{
		scanf("%d", &t);
		switch(t)
		{
			case 1: task1();
			break;
			case 2: task2();
			break;
			case 3: task3();
			break;
		}
	}
}