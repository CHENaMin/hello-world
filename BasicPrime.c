//ç´ æ•°æ˜¯åªæœ‰1å’Œæœ¬èº«æ˜¯å› å­çš„æ•°
//2018/11/14 æ›´æ–°
#include <stdio.h> 
int main() {
	int a=0; //to do sthÅĞ¶ÏÒ»¸öÊıÊÇ·ñÎªËØÊı 
    int num;  // ÊäÈëµÄÕûÊı£¬aÎªËØÊıµÄ¸öÊı 
	scanf("%d", &num);
	int i=2;
	while (i<num)
	{
        if(num%i==0)
		{
            a++;  // ËØÊı¸öÊı¼Ó1
        }
        i++;
    }

    if(a==0)
	{
        printf("%dÊÇËØÊı\n", num);
    }else{
        printf("%d²»ÊÇËØÊı\n", num);
    }
 	return 0; 
}
