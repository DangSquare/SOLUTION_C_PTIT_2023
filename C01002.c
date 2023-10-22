// GẤP ĐÔI 2

/*
Cho số tự nhiên N không quá 9 chữ số. Hãy in ra giá trị gấp đôi của N.

Input
Dòng đầu ghi số bộ test. Mỗi bộ test có duy nhất một số tự nhiên không quá 9 chữ số.

Output
Với mỗi bộ test, ghi ra kết quả trên một dòng.

Ví dụ
Input			Output
2				2
1				46
23

*/

#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		printf("%lld", n*2);
		printf("\n");
	}
}