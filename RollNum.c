//回文数：正读与反读相等的数
//2018/11/14 更新
#include <stdio.h> 
int main() {
    int num, NUM;//to do sth��һ�����Ƿ�Ϊ������ 
    int a[1000], b[1000];//a[n]Ϊ��������ÿλ���ֹ��ɵ����飬b[n]Ϊ��������ÿλ���ֹ��ɵ����� 
    int x=1;//xΪ����λ�� 
    scanf ("%d", &num);
    
	NUM=num;
	while (NUM/10==0)
    {
    	NUM=NUM/10;
    	x++;
	}
	
	int i=0, j=0;
	for (i=0; i<x; i++)
	{
		a[i]=num%10;//������a��¼��������
		num=num/10; 
	}
	
	for (j=0; j<x; j++)
	{
		b[x-j]=a[i];//������b��¼�������� 
	 } 
	 
	if (a[1000]==b[1000])
	{
		printf ("����Ϊ������"); 
	}
	else
		printf ("�������ǻ�����");
	
	return 0;
}
