#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i = 0;
    int count = 0;
    for (i = 100; i <= 200; i++)
    {
        //判断i是否为素数
        //素数判断的规则
        //1.试除法
        //产生2->i-1
        int j = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\ncount=%d", count);
    return 0;
}