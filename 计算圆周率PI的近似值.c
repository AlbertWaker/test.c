#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int count = 0;//第几位
	int sign = 1;//符号
	int number = 1;//分母
	int i = 1;
	double sum = 0;//求和
	double PI = 0;//Π
	printf("请输入大于2的正整数:");
        scanf("%d", &count);
	for (i = 1; i <= count; i++)
	{
		sum = sign * 1.0 / number;
		PI = PI + sum;
		number = number + 2;
		sign = -sign;
	}
	printf("PI的值:%.14lf", PI * 4);
	return 0;
}
