#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i = 0;
    int num = 0;
    scanf("%d", &num);
    //获取奇数位的数字
    for (i = 30; i >= 0; i -= 2)
    {
        printf("%d ", (num >> i) & 1);
    }
    printf("\n");
    //获取偶数位的数字
    for (i = 31; i >= 0; i -= 2)
    {
        printf("%d ", (num >> i) & 1);
    }
    return 0;
}