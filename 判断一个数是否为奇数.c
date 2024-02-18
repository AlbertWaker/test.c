#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int number;
    printf("请输入一个数:");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("偶数\n");
    }
    else
    {
        printf("奇数\n");
    }
    return 0;
}