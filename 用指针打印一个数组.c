#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int* p = arr;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", *p);
        p++;
    }
    return 0;
}