#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define pi 3.14

double surface_area(double r, double h)//求表面积
{
	return 2 * pi * r * h + 2 * pi * r * r;
}

double volume(double r, double h)//求体积
{
	return pi * r * r * h;
}

int main()
{
	double h = 0;//高
	double r = 0;//半径
	double s = 0;//表面积
	double v = 0;//体积
	printf("请输入圆柱体的半径和高度:");
	scanf("%lf %lf", &r, &h);
	s = surface_area(r, h);//求表面积
	v = volume(r, h);//求体积
	printf("圆柱体的表面积:%lf\n圆柱体的体积:%lf", s, v);//输出表面积和体积
	return 0;
}