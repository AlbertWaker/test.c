#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	
int main()
{
	int n = 0;
	int m = 0;
	int arr[20] = { 0 };
	int i = 0;
	printf("请输入一个十进制正整数:");
	scanf("%d", &n);
	printf("请输入要转换的进制(2<=m<10):");
	scanf("%d", &m);
	while (n)
	{
		arr[i] = n % m;
		n /= m;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
