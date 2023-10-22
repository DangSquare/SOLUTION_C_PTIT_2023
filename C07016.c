#include<stdio.h> 
#include<string.h> 
#include<math.h> 
#include<ctype.h> 
#include<stdlib.h> 

struct hanghoa
{ 
	char ten[1001], nhom[1001];
	int ma; 
	float mua, ban; 
}; 

typedef struct hanghoa hha; 

void nhap(hha *a)
{ 
	getchar(); 
	gets(a->ten);
	gets(a->nhom); 
	scanf("%f %f", &a->mua, &a->ban); 
} 

void in(hha a)
{ 
	printf("%d %s %s %.2f\n", a.ma, a.ten, a.nhom, a.ban-a.mua); 
} 

int cmp(const void *a,const void *b)
{ 
	hha *x=(hha*)a;
	hha *y=(hha*)b; 
	if((float)x->ban - x->mua > (float)y->ban - y->mua) 
		return -1;
	return 1; 
} 

int main()
{ 
	int n; 
	scanf("%d", &n);
	hha a[n]; 
	for(int i=0; i<n; i++)
	{ 
		nhap(&a[i]);
		a[i].ma=i+1; 
	} 
	qsort(a, n, sizeof(hha), cmp); 
	for(int i=0; i<n; i++) 
		in(a[i]); 
	return 0;
} 