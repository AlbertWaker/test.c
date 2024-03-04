#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int count_diff_bit(int m, int n)//方法1
{
    int count = 0;
    int i = 0;
    for (i = 0; i < 32; i++)
    {
        if (((m >> i) & 1) != ((n >> i) & 1))
        {
            count++;
        }
    }
    return count;
}

int count_diff_bit(int m, int n)//方法2
{
    int count = 0;
    //^异或操作符
    //相同为0，相异为1
    int ret = m ^ n;
    //统计一下ret中二进制位有几个1
    while (ret)
    {
        ret = ret & (ret - 1);
        count++;
    }
    return count++;
}

int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int ret = count_diff_bit(m, n);
    printf("%d\n", ret);
    return 0;
}
