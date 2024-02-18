#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int ch = 0;
    while ((ch = getchar()) != '\n')
    {
        if (ch < '0' || ch > '9')//只输出0~9
        {
            continue;
        }
        putchar(ch);
    }
    return 0;
}