#include <stdio.h>
int main (void)
{
	double a, b, c, d, e, f, m;
	printf("������δ֪��ǰ��ϵ�������̵�ֵ��"); 
	scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);//�����Ԫһ�η�����δ֪����ϵ�������̵�ֵ 
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
		{	printf ("�˷����鲻����");
		}
		else
		{	
			if ( 0!=(a*e), 0!=(b*d) )//����������������ϵ��������� 
			{	
				if ( c==f )
				{
					printf ("��������������"); //������ʵ��Ϊһ������ 
				}
				else 
				{
					printf ("��������ʵ����");//���������໥ì�� 
				}
			}
			else
			{
				printf ("�������������Թ��ɶ�Ԫһ�η�����\n"); 
				if ( 0!=a, 0!=b | 0!=d, 0!=e )
				{	printf ("�˷�������������ʵ����");//������ʵ��Ϊһ�����̣���һ�����̲����� 
				}
				else
				{	printf ("��Ϊ��Ԫһ�η�����");//ֻ��һ������ 
				 } 
			}
		}
	}
	return 0;
 } 
