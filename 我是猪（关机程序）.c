﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");
    while (1)
    {
        printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入:>");
        scanf("%s", input);
        if (strcmp(input, "我是猪") == 0)
        {
            system("shutdown -a");
            break;
        }
    }
    return 0;
}