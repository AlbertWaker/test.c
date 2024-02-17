#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    printf("%d\n", sizeof(char*));
    printf("%d\n", sizeof(short*));
    printf("%d\n", sizeof(int*));
    printf("%d\n", sizeof(double*));
    return 0;
}
//指针大小在32位平台是4个字节，在64位平台是8个字节