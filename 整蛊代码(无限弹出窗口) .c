#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[285] = "while(1)\nmsgbox(\"关不掉我吧\")\nmsgbox(\"哈哈，还是关不掉我\")\nmsgbox(\"你就是关不掉我\")\nmsgbox(\"大爆发，我就是这么强大\")\nmsgbox(\"关不掉我吧\")\nmsgbox(\"啦啦啦\")\nmsgbox(\"你拿我没办法\")\nmsgbox(\"哈哈哈\")\nmsgbox(\"气死你，哈哈哈哈\")\nWend ";
	FILE* fp;
	fp = fopen("D:\\无限弹出窗口.vbs", "w+");//文件路径
	if (fp == NULL)//打开文件
	{
		printf("不能打开文件!\n");
		exit(1);
	}
	fputs(str, fp);//写入文件
	if (fclose(fp))//关闭文件
	{
		printf("不能关闭文件!\n");
		exit(1);
	}
	system("D:/无限弹出窗口.vbs");//运行程序
	return 0;
}