#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[6][6] = { 0 };
	int number = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (number < arr[i][j])
			{
				number = arr[i][j];
				arr[0][0] = i;
				arr[0][1] = j;
			}
		}

		for (j = 1; j <= 5; j++)
		{
			if (number > arr[j][arr[0][1]])
			{
				number = 0;
				break;
			}
		}
		if (j == 6)
		{
			printf("%d %d %d\n", arr[0][0], arr[0][1], number);
			return 0;
		}
	}
	printf("’“≤ªµΩ\n");
	return 0;
}
