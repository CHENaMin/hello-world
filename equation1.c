#include <stdio.h>
#include <math.h> //����sqrt����������delta��ƽ������������ͷ�ļ� 
void CalculateRealRoot (double a, double b, double c); //���跽��Ϊa*x*x+b*x+c=0 
int main (void)
{
	double a, b, c;
	printf("���������������ϵ����һ����ϵ���������");
	scanf("%lf%lf%lf", &a, &b, &c);
	if ( 0==a )
	{	printf("�˷��̲�ΪһԪ���η���\n");// ����ʵ��Ϊb*x+c=0
		double x;
		x=(-c)/b;
		printf("x=%lf", x);//���һԪһ�η��̵Ľ� 
	}
	else
	{
		CalculateRealRoot (a, b, c);
	 } 
	return 0;
}
void CalculateRealRoot (double a, double b, double c)//����CalculateRealRoot()���� 
{
	double delta, x1, x2;
	delta=b*b-4*a*c;
	if (delta<0)
	{
		printf ("�˷�����ʵ����");
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
