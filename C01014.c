// PHƯƠNG TRÌNH BẬC NHẤT

/*
Viết chương trình nhập 2 số thực a,b và in ra nghiệm của phương trình bậc nhất a*x+b=0.

Input
Chỉ có một dòng ghi hai số a,b.

Output
Kết quả ghi ra trên một dòng tương ứng là “Vo nghiem”  “Vo so nghiem” hoặc nghiệm dưới dạng số thực có đúng 2 chữ số sau dấu phẩy.

Ví dụ

Input
2 -1
0 1
0 0

Output
0.50
Vo nghiem
Vo so nghiem

*/

#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a==0 && b!=0)
	{
		printf("Vo nghiem");
	}
	else if(a==0 && b==0)
	{
		printf("Vo so nghiem");
	}
	else
	{
		printf("%.2lf", 1.0*(-b)/a);
	}
}







