#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int tmp = arr[0];
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[9] = tmp;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}