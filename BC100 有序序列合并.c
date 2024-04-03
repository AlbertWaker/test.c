#define _CRT_SECURE_NO_WARNINGS 1
//输入包含三行，第一行包含两个正整数n,m,用空格分隔，n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//输出为一行，输出长度为n+m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[1000];//c99 - 变长数组
	int arr2[1000];
	int i = 0;
	//输入n个整数
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	//输入m个整数
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//合并打印
	int j = 0;
	int k = 0;
	while (j < n && k < m)
	{
		if (arr1[j] < arr2[k])
		{
			printf("%d ", arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
	}
	if (j < n)
	{
		for (; j < n; j++)
		{
			printf("%d ", arr1[j]);
		}
	}
	else
	{
		for (; k < m; k++)
		{
			printf("%d ", arr2[k]);
		}
	}
	return 0;
}