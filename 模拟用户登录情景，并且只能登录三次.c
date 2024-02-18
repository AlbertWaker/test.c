//只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char password[20] = { 0 };
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码:>");
        scanf("%s", password);
        if (strcmp(password, "123456") == 0)//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
        {
            printf("登录成功\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }
    }
    if (i == 3)
    {
        printf("三次密码均错误，退出程序\n");
    }
    return 0;
}