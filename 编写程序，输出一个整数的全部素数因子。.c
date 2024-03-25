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
	int number = 0;
	int i = 2;
	printf("请输入一个正整数:");
	scanf("%d", &number);
	while (number > 1)
	{
		if (number % i == 0 && prime(i))
		{
			printf("%d ", i);
			number /= i;
		}
		else
		{
			i++;
		}
	}
	return 0;
}