#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	//断言
	assert(src != NULL);
	assert(dest != NULL);

	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "XXXXXXXXXXXX";
	char arr2[] =   "hello bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
} 