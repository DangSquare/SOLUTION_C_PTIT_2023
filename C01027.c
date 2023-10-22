// ƯỚC SỐ CHUNG LỚN NHẤT

/*
Viết chương trình tính ước số chung lớn nhất của 2 số nguyên dương (không quá 6 chữ số).

Input
Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng hai số nguyên dương. 

Output
Mỗi bộ test ghi ra kết quả tính được trên một dòng. 

Ví dụ
Input
2
24 14
75 125

Output
2
25

*/

#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		int uoc_chung_max;
		for(int i=1; i<=b; i++)
		{
			if(a%i==0 && b%i==0)
			{
				uoc_chung_max=i;
			}
		}
		printf("%d\n", uoc_chung_max);
	}	
}