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
	while (scanf("%d%d", &y, &m) == 2)
	{
		int d = days[m];
		if ((is_leap_year(y) == 1) && (m == 2))
		{
			d++;
		}
		printf("%d\n", d);
	}
	return 0;
}