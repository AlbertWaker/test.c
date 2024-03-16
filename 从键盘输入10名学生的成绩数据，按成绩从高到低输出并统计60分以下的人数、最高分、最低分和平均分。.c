#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int score[10] = { 0 };
	int average = 0;//平均分
	int count = 0;//统计60分以下的人数
	float sum = 0;//学生的分数之和
	int tmp = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		printf("请输入第%d个学生的成绩:", i + 1);
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (score[i] < score[j])
			{
				tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		}
	}
	printf("成绩从高到低排序:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", score[i]);
		if (score[i] < 60)
		{
			count++;
		}
		sum = sum + score[i];
	}
	printf("\n");
	printf("60分以下的人数:%d\n", count);
	printf("最高分:%d\n", score[0]);
	printf("最低分:%d\n", score[9]);
	printf("平均分:%f\n", sum / 10);
	return 0;
}