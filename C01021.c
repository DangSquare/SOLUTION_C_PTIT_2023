// TỔNG CHỮ SỐ-1

/*
Viết chương trình nhập vào một số n không quá 109, thực hiện tìm tổng các chữ số của n và in ra màn hình.

Input:
Chỉ có một dòng ghi số n.

Output:
Ghi ra kết quả tính toán

Ví dụ: 

Input
1234

Output
10

*/

#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
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
	printf("%d", sum);
}
