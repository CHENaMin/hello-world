//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。
//2018/11/14 更新
#include <stdio.h> 
int main() {
    int year;//to do sth�ж��Ƿ�Ϊ����
	scanf ("%d", &year);
	if (year%100==0)
	{
		if (year%400==0)
			printf("����");
		else
			printf ("ƽ��"); 
	 } 
	else
	{
		if (year%4==0)
			printf ("����");
		else 
			printf ("ƽ��");
	}
	
	return 0; 
}
