#include <stdio.h>
#include <math.h> //调用sqrt（）函数求delta的平方根所包含的头文件 
void CalculateRealRoot (double a, double b, double c); //假设方程为a*x*x+b*x+c=0 
int main (void)
{
	double a, b, c;
	printf("请依次输入二次项系数、一次项系数及常数项：");
	scanf("%lf%lf%lf", &a, &b, &c);
	if ( 0==a )
	{	printf("此方程不为一元二次方程\n");// 方程实际为b*x+c=0
		double x;
		x=(-c)/b;
		printf("x=%lf", x);//求出一元一次方程的解 
	}
	else
	{
		CalculateRealRoot (a, b, c);
	 } 
	return 0;
}
void CalculateRealRoot (double a, double b, double c)//定义CalculateRealRoot()函数 
{
	double delta, x1, x2;
	delta=b*b-4*a*c;
	if (delta<0)
	{
		printf ("此方程无实数根");
	}
	else
	{	if (delta==0)
		{	x1=(-b)/(2*a);
			x2=(-b)/(2*a);
			printf("x1=%lf,x2=%lf\n", x1, x2);
		}
		else
		{	x1=(-b+sqrt(delta)) / (2*a);
			x2=(-b-sqrt(delta)) / (2*a);
			printf("x1=%lf,x2=%lf\n", x1, x2);
		}
	}
}
