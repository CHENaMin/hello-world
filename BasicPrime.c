//素数是只有1和本身是因子的数
//2018/11/14 更新
#include <stdio.h> 
int main() {
	int a=0; //to do sth�ж�һ�����Ƿ�Ϊ���� 
    int num;  // �����������aΪ�����ĸ��� 
	scanf("%d", &num);
	int i=2;
	while (i<num)
	{
        if(num%i==0)
		{
            a++;  // ����������1
        }
        i++;
    }

    if(a==0)
	{
        printf("%d������\n", num);
    }else{
        printf("%d��������\n", num);
    }
 	return 0; 
}
