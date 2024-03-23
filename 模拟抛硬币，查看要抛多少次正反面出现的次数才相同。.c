#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
int main()
{
	int number = 0;
	int count1 = 0;
	int count2 = 0;
	int i = 0;
	srand((unsigned int)time(NULL));
	for (i = 1; i <= 50; i++)
	{
		number = rand() % 2;
		if (number)
		{
			count1++;
		}
		else
		{
			count2++;
		}
		if (i >= 10 && count1 == count2)
		{
			printf("%d", i);
			break;
		}
	}
	if (i > 50)
	{
		printf("需要抛更多次");
	}
	return 0;
}