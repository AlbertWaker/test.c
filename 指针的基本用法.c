#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a = 10;//4个字节
    int* p = &a;//取地址
    *p = 20;//* 解引用操作符
    printf("a=%d\n", a);
    //有一种变量是用来存放地址的--指针变量
    return 0;
}