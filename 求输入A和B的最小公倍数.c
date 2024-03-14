#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		else
//			m++;
//	}
//	printf("%d\n", m);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int i = 1;
	while (a * i % b)
	{
		i++;
	}
	printf("%d\n", i*a);
	return 0;
}