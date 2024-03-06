#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

void my_strcpy(char* dest, const char* src)
{
	//断言
	assert(src != NULL);
	assert(dest != NULL);

	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[20] = "XXXXXXXXXXXX";
	char arr2[] =   "hello bit";
	my_strcpy(arr1, arr2);
	printf("%s\n",arr1);
	return 0;
} 