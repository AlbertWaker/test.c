#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int r = 0;
	int n = 0;
	printf("请输入两个数:");
	scanf("%d %d", &a, &b);
	n = a * b;
	while (r = a % b)
	{
		a = b;
		b = r;
	}
	printf("最大公约数:%d\n", b);
	printf("最小公倍数:%d\n", n / b);
	return 0;
}