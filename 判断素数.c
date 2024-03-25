#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int prime(int m)
{
	int i = 0;
	for (i = 2; i < m / 2; i++)
	{
		if (m % i == 0)
		{
			return 0;
		}
	}
	if (i > m / 2)
	{
		return 1;
	}
}

int main()
{
	int m = 0;
	printf("请输入一个数m:");
	scanf("%d", &m);
	if (prime(m))
	{
		printf("m是素数\n");
	}
	else
	{
		printf("m不是素数\n");
	}
	return 0;
}