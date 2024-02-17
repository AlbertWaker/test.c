#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define Max(X,Y) (X>Y?X:Y)//宏定义
int main()
{
    int a = 10;
    int b = 20;
    int max = Max(a, b);
    printf("max=%d", max);
    return 0;
}