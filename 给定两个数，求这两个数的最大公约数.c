#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    int r = 0;
    scanf("%d%d", &m, &n);
    while (r = m % n)
    {
        m = n;
        n = r;
    }
    printf("%d", n);
    return 0;
}