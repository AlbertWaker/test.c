#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int num1 = 10, num2 = 20;
    if (num1 > num2)
        printf("较大值是:%d", num1);
    else
        printf("较大值是:%d", num2);
    return 0;
}