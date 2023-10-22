// TỔNG CHỮ SỐ-2

/*
Hãy viết chương trình tính tổng các chữ số của một số nguyên bất kỳ.

Input 
Dòng đầu tiên của dữ liệu vào ghi số bộ test, mỗi bộ test ghi trên một dòng 1 số nguyên dương không quá 9 chữ số.

Output
Kết quả của mỗi bộ test cũng ghi trên một dòng.

Ví dụ

Input
1
1234

Output
10

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
		int n;
		scanf("%d", &n);
		int sum=0;
		while(n!=0)
		{
		    int m=n%10;
		    sum+=m;
		    n/=10;
		}
		printf("%d\n", sum);
	}	
}


