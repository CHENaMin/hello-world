//输入整数，将每位数字打印出来（从左向右打印，空格区分）
//2018/11/14 更新
#include <stdio.h> 
int main() {
    int num, NUM;//to do sth
    scanf ("%d", &num);
    NUM=num;
	int a[1000];
    int x=1,i,j;//xΪ����λ�� 
    
	while (num/10==0)//ͨ��ѭ��������λ�� 
    {
    	num=num/10;
    	x++;
	}
	
	for (i=0; i<x; i++)//����ÿλ�� 
	{
		a[x-i]=NUM%10;
		NUM=NUM/10;
	}
	
	printf ("%d", a[1000]);
    return 0;
}
