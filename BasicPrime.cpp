//素数是只有1和本身是因子的数
//2018/11/14 更新
#include <stdio.h> 
int main() {
	int a=0; //判断一个数是否为素数 
    int num;  // 输入的整数，a为素数的个数 
	scanf("%d", &num);
	int i=2;
	while (i<num)
	{
        if(num%i==0)
		{
            a++;  // 素数个数加1
        }
        i++;
    }

    if(a==0)
	{
        printf("%d是素数\n", num);
    }else{
        printf("%d不是素数\n", num);
    }
 	return 0; 
}
