﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}