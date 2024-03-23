#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int is_leap_year(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int sum = 1;
	int i = 0;
	while (scanf("%d%d%d", &y, &m, &d) == 3)
	{
		if ((is_leap_year(y) == 1) && (m == 2))
		{
			d++;
		}
		sum = sum + days[m] - d;
		for (i = m+1; i <= 12; i++)
		{
			sum = sum + days[i];
		}
		printf("%d\n", sum);
	}
	return 0;
}