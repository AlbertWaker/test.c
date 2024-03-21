#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int max1 = 0;//最大值1
	int max2 = 9;//最大值2
	int days = 7;//天数
	int i = 0;
	printf("输入:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	while (days--)
	{
		for (i = 0; i < 10; i++)
		{
			if (arr[i] > arr[max1] && i != max2)max1 = i;
			if (arr[9-i] > arr[max2] && 9-i != max1)max2 = 9-i;
		}
		arr[max1] -= 5, arr[max2] -= 5;
		max1 = 0, max2 = 9;
	}
	printf("输出:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
