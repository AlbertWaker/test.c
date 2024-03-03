#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int count_num_of_1(unsigned int n)//方法1
{
	int count = 0;
	while (n)
	{
		if ((n % 2) == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}

int count_num_of_1(int n)//方法2
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> 1) & 1) == 1)
		{
			count++;
		}
	}
}

int count_num_of_1(int n)//方法3
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int n = count_num_of_1(num);
	printf("%d\n", n);
	return 0;
}