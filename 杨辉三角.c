#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 11
int main()
{
	int i, j, y[N][N];
	for (i = 1; i < N; i++)
	{
		y[i][1] = y[i][i] = 1;
		for (j = 2; j <= i - 1; j++)
			y[i][j] = y[i - 1][j] + y[i - 1][j - 1];
	}
	for (i = 1; i < N; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%4d", y[i][j]);
		printf("\n");
	}
	return 0;
}