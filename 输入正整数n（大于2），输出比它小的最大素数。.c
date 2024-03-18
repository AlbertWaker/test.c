#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	
int main()
{
	int count = 0;
	int number = 0;
	int i = 0;
	int j = 0;
	printf("请输入一个正整数n(大于2):");
	scanf("%d", &count);
	for(number=count-1;number>2;number--)
	{
		for (i = 2; i < number-1; i++)
		{
			if (number % i == 0)
			{
				break;
			}
		}
		if (number % i)
		{
			printf("%d\n", number);
			break;
		}
	}
	if (!count)
	{
		printf("没找到比它小的最大素数\n");
	}
	return 0;
}