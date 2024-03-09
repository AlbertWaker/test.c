#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) == 3)
	{
		//判断
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			if (a == b && b == c)
			{
				printf("Equilateral triangle!\n");//等边三角形
			}
			else if ((a == b && b != c) || (a == c && c != b) || (b == c && b != a))
			{
				printf("Isosceles triangle!\n");//等腰三角形
			}
			else
			{
				printf("Ordinary triangle!\n");//普通三角形
			}
		}
		else
		{
			printf("Not a triangle!\n");//不是三角形
		}
	}
	return 0;
}