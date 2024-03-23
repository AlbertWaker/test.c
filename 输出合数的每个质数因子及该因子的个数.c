#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int number = 0;
	int count = 0;
	int i = 2;
	printf("请输入一个合数:");
	scanf("%d", &number);
	while (number)
	{
		if (number % i == 0)
		{
			if (number - i == 0)
			{
				number = number - i;
				count++;
				printf("%d %d\n", i, count);
			}
			else
			{
				number = number / i;
				count++;
			}
		}
		else
		{
			if (count)
			{
				printf("%d %d\n", i, count);
				count = 0;
			}
			i++;
		}
	}
}