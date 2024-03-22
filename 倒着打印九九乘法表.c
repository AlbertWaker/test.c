#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i > j)
			{
				printf("\t");
			}
			else
			{
				printf("%d*%d=%d\t", i, j, i * j);
			}
		}
		printf("\n");
	}
	return 0;
}
