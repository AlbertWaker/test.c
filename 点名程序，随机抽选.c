#define _CRT_SECURE_NO_WARNINGS 1
//假设某班级座号从1开始进行顺序递增编号，若班级人数是n，则座号是1到n。
//某日上课时，老师要进行随机点名提问，发现该班级某几个同学缺课，请设计
//程序帮老师随机抽选被提问的同学，输出他们的座号。要求输出的座号不能是
//旷课同学的座号，且不能重复。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int class_size = 0;//班级人数
	int number_of_absences = 0;//缺课人数
	int number = 0;//点名人数
	int random = 0;//随机值
	int Absent_seat_number = 0;//缺课座号
	int i = 0;
	printf("请输入班级人数:");
	scanf("%d",&class_size);
	int* p1 = (int*)malloc(sizeof(int)*class_size);
	if (p1 == NULL)
	{
		printf("内存分配失败");
		return 0;
	}
	memset(p1, 1, sizeof(int));
	printf("请输入缺课人数:");
	scanf("%d", &number_of_absences);
	printf("请输入缺课座号序列:");
	while (number_of_absences--)
	{
		scanf("%d", &Absent_seat_number);
		p1[Absent_seat_number - 1] = 0;
	}
	printf("请输入点名人数:");
	scanf("%d", &number);
	srand((unsigned int)time(NULL));
	while (number--)
	{
		random = rand() % class_size + 1;
		if (p1[random-1] == 0)
		{
			number++;
		}
		else
		{
			printf("%d ", random);
			p1[random - 1] = 0;
		}
	}
	return 0;
}
