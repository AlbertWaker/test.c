#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[224] = "msgbox\"电脑即将自爆\"+chr(13)+\"请在15秒内离开座位\"+chr(13)+\"否则你死定了\",2,\"系统自爆提醒\"\nCreateObject(\"SAPI.SpVoice\").Speak\"电脑即将自爆，请在15秒内离开座位，否则你死定了！\"";
	FILE* fp;
	fp = fopen("D:\\电脑即将自爆.vbs", "w+");//文件路径
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
	system("D:/电脑即将自爆.vbs");//运行程序
	return 0;
}