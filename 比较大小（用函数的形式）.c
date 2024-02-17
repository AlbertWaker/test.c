#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int num1 = 10, num2 = 20, max;
    max = Max(num1, num2);
    printf("max=%d\n", max);
    return 0;
}