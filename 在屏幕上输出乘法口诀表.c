#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i = 0;
    //确定打印9行
    for (i = 1; i <= 9; i++)
    {
        //打印一行
        int j = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}