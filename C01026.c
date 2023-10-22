// SỐ NGUYÊN TỐ

/*
Viết chương trình kiểm tra một số nguyên dương có phải số nguyên tố hay không.

Input
Dòng đầu của dữ liệu vào ghi số bộ test. Mỗi dòng tiếp theo có một nguyên dương không quá 9 chữ số.

Output
Kết quả in ra YES nếu đó là số nguyên tố, in ra NO nếu ngược lại.

Ví dụ:

Input
3
123456
997
111111111

Output
NO
YES
NO

*/

#include<stdio.h>
#include<math.h>

int checkNt(int n)
{
	if(n<2)
		return 0;
	for(int i=0; i<=sqrt(n); i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		if(checkNt(n))
			printf("YES");
		else
			printf("NO");
		printf("\n");
	}
}

