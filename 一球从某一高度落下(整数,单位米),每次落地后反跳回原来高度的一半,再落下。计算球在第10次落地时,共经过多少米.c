#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float sum = 0;
	float h = 0;
	int i = 0;
	printf("请输入高度:");
	scanf("%f", &sum);
	h = sum;
	for (i = 1; i < 10; i++)
	{
		h = h / 2;
		sum = sum + 2 * h;
	}
	printf("%f", sum);
	return 0;
}
