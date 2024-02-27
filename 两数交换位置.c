#define _CRT_SECURE_NO_WARNINGS 1
//两数交换位置(需要用到第三变量，推荐)
#include <stdio.h>
int main()
{
    int a = 3;
    int b = 5;
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;
    printf("a = %d,b = %d", a, b);
    return 0;
}
//两数交换位置(不需要第三变量，但是两数特别大的时候，可能会溢出)
#include <stdio.h>
int main()
{
    int a = 3;
    int b = 5;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d,b = %d", a, b);
    return 0;
}
//两数交换位置(不需要第三变量，异或的方法，不会溢出，但是可读性不高，执行效率也不高)
#include <stdio.h>
int main()
{
    int a = 3;
    int b = 5;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a = %d,b = %d", a, b);
    return 0;
}