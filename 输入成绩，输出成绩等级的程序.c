#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int score;
	printf("请输入成绩:");
	scanf("%d", &score);
	if (score >= 90 && score <= 100)
	{
		printf("A");
	}
	else if (score >= 70 && score <= 89)
	{
		printf("B");
	}
	else if (score >= 60 && score <= 69)
	{
		printf("C");
	}
	else if (score >= 0 && score <= 59)
	{
		printf("D");
	}
	else
	{
		printf("Invalid score");
	}
	return 0;
}