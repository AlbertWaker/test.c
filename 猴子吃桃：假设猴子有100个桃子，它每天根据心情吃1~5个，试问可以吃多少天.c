#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
int main()
{
	int Peach = 100;
	int eat = 0;
	int day = 0;
	srand((unsigned int)time(NULL));
	while (Peach)
	{
		eat = rand() % 5 + 1;
		if (Peach < eat)//说明：如果最后一天的桃子数不足想吃的个数，则一次性吃完。
		{
			Peach = 0;
			day++;
		}
		else
		{
			Peach = Peach - eat;
			day++;
		}
	}
	printf("%d\n", day);
	return 0;
}