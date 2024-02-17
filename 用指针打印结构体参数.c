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
    struct Book* pb = &b1;
    printf("%s\n", (*pb).name);
    printf("%d\n", (*pb).price);
    printf("%s\n", pb->name);
    printf("%d\n", pb->price);
    return 0;
}