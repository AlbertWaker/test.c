#define _CRT_SECURE_NO_WARNINGS 1
//求出0~100000之间的所有"水仙花数"并输出
//"水仙花数"是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153=1^3+5^3+3^3,则153是一个"水仙花数"。
#include <stdio.h>
#include <math.h>
int is_narcissistic_number(int i)
{
	//判断i是否为"水仙花数"
	//1.计算i是几位数
	int n = 1;
	int tmp = i;
	int sum = 0;
	while (tmp / 10)
	{
		n++;
		tmp /= 10;
	}
	//2.得到i每一位，计算他的n次方之和
	tmp = i;
	while (tmp)
	{
		sum += pow(tmp % 10, n);
		tmp /= 10;
	}
	if (sum == i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		if (is_narcissistic_number(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
}