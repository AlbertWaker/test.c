#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[10001] = { 0 };//数据范围:1<=len(str)<=10000
	gets(arr);
	//逆序
	int left = 0;
	int right = strlen(arr)-1;

	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}
	printf("%s\n", arr);
	return 0;
}