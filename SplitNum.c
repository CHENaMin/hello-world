//è¾“å…¥æ•´æ•°ï¼Œå°†æ¯ä½æ•°å­—æ‰“å°å‡ºæ¥ï¼ˆä»å·¦å‘å³æ‰“å°ï¼Œç©ºæ ¼åŒºåˆ†ï¼‰
//2018/11/14 æ›´æ–°
#include <stdio.h> 
int main() {
    int num, NUM;//to do sth
    scanf ("%d", &num);
    NUM=num;
	int a[1000];
    int x=1,i,j;//xÎªÊıµÄÎ»Êı 
    
	while (num/10==0)//Í¨¹ıÑ­»·ÇóÊıµÄÎ»Êı 
    {
    	num=num/10;
    	x++;
	}
	
	for (i=0; i<x; i++)//·ÖÀëÃ¿Î»Êı 
	{
		a[x-i]=NUM%10;
		NUM=NUM/10;
	}
	
	printf ("%d", a[1000]);
    return 0;
}
