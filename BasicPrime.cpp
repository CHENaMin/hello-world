//������ֻ��1�ͱ��������ӵ���
//2018/11/14 ����
#include <stdio.h> 
int main() {
	int a=0; //�ж�һ�����Ƿ�Ϊ���� 
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
