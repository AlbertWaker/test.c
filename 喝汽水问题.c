#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给n元，可以喝多少汽水
#include <stdio.h>
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;
	//置换
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}