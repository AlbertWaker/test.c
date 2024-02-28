#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
my_strlen(char* str)
{
    char* start = str;
    char* end = str;
    while (*end != '\0')
    {
        end++;
    }
    return end - start;
}
int main()
{
    char arr[] = "hello";
    int len = my_strlen(arr);
    printf("%d\n", len);
    return 0;
}