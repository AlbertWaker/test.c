#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0;
	int i = 2;
	printf("请输入一个大于1的正整数:");
	scanf("%d",&number);
	printf("%d=",number);
	while (number)
	{
		if (number % i == 0)
		{
			if (number / i == 1)
			{
				number = number - i;
				printf("%d", i);
			}
			else
			{
				number = number / i;
				printf("%d*", i);
			}
		}
		else
		{
			i++;
		}
	}
	return 0;
}
