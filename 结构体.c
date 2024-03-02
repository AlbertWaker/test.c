#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Book
{
    char name[20];
    short price;
};
int main()
{
    struct Book b1 = { "c语言程序设计",55 };
    printf("书名:%s\n", b1.name);
    printf("价格:%d元\n", b1.price);
    b1.price = 15;//修改数组可以用strcpy(b1.name,"c++");字符串拷贝 需要应用头文件string.h
    printf("修改后的价格:%d元\n", b1.price);
    return 0;
}