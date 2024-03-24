#define _CRT_SECURE_NO_WARNINGS 1
//某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理，
//按照0 - 18、19 - 35、36 - 60、61以上（含61）四个年龄段统计的患病人数占总患病人数的比例。
#include <stdio.h>
int main()
{
	int n;//过往病人的数目
	int arr[100] = { 0 };
	float year[5] = { 0 };//各年龄段的人数和总人数
	int i = 0;
	printf("请输入过往病人的数目(0~100):");
	scanf("%d", &n);
	printf("请输入各过往病人的年龄:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > 0 && arr[i] <= 18)
		{
			year[0]++;
		}
		else if (arr[i] >= 19 && arr[i] <= 35)
		{
			year[1]++;
		}
		else if (arr[i] >= 36 && arr[i] <= 60)
		{
			year[2]++;
		}
		else
		{
			year[3]++;
		}
	}
	year[4] = year[0] + year[1] + year[2] + year[3];
	printf("%.1f%%\n", year[0] / year[4] * 100);
	printf("%.1f%%\n", year[1] / year[4] * 100);
	printf("%.1f%%\n", year[2] / year[4] * 100);
	printf("%.1f%%\n", year[3] / year[4] * 100);
	return 0;
}
