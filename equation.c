#include <stdio.h>
int main (void)
{
	double a, b, c, d, e, f, m;
	printf("请输入未知量前的系数及方程的值："); 
	scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);//输入二元一次方程组未知量的系数及方程的值 
	m=b*d-a*e;
	if ( 0!=m )
	{
		double x, y;
		x=(c*e-b*f)/(a*e-b*d);
		y=(c*d-a*f)/(b*d-a*e);
		printf ("x=%lf", x);
		printf ("y=%lf\n", y); 
	 } 
	else
	{
		if ( 0==a, 0==b, 0==c, 0==d )
		{	printf ("此方程组不存在");
		}
		else
		{	
			if ( 0!=(a*e), 0!=(b*d) )//方程组上下两方程系数比例相等 
			{	
				if ( c==f )
				{
					printf ("方程组有无穷多解"); //两方程实则为一个方程 
				}
				else 
				{
					printf ("方程组无实数解");//两个方程相互矛盾 
				}
			}
			else
			{
				printf ("所给条件不足以构成二元一次方程组\n"); 
				if ( 0!=a, 0!=b | 0!=d, 0!=e )
				{	printf ("此方程组有无数个实数解");//两方程实则为一个方程，有一个方程不存在 
				}
				else
				{	printf ("不为二元一次方程组");//只有一个变量 
				 } 
			}
		}
	}
	return 0;
 } 
