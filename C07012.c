#include<stdio.h>
#include<math.h>
#include<string.h>

struct HangHoa
{
	int maMatHang;
	char tenMatHang[205], nhomHang[205];
	float giaMua, giaBan;
	float loiNhuan;
};

int cmp(struct HangHoa a, struct HangHoa b)
{
	if(a.loiNhuan > b.loiNhuan)
		return 1;
	return 0;
}

void xuly(char s[])
{
	if(s[strlen(s)-1]=='\n')
		s[strlen(s)-1]=0;
}

int sort(struct HangHoa a[], int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=i+1; j<=n; j++)
		{
			if(cmp(a[i], a[j])==0)
			{
				struct HangHoa tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}


int main()
{
	int n;
	scanf("%d\n", &n);
	struct HangHoa a[1005];
	for(int i=1; i<=n; i++)
	{
		a[i].maMatHang=i;
		fgets(a[i].tenMatHang, 10005, stdin);
		fgets(a[i].nhomHang, 10005, stdin);
		xuly(a[i].tenMatHang);
		xuly(a[i].nhomHang);
		scanf("%f%f\n", &a[i].giaMua, &a[i].giaBan);
		a[i].loiNhuan=a[i].giaBan-a[i].giaMua;
	}
	sort(a, n);
	for(int i=1; i<=n; i++)
	{
		printf("%d %s %s %.2f\n", a[i].maMatHang, a[i].tenMatHang, a[i].nhomHang, a[i].loiNhuan);
	}
	
}