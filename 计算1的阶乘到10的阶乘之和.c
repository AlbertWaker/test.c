#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    for (n = 1; n <= 10; n++)
    {
        ret = ret * n;//n的阶乘
        sum = sum + ret;
    }
    printf("sum=%d\n", sum);
    return 0;
}