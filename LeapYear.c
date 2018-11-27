//è¢«4æ•´é™¤çš„å¹´ä»½æ˜¯é—°å¹´ï¼Œä½†æ˜¯00ç»“å°¾çš„å¹´ä»½è¢«400æ•´é™¤æ‰æ˜¯é—°å¹´ã€‚
//2018/11/14 æ›´æ–°
#include <stdio.h> 
int main() {
    int year;//to do sthÅĞ¶ÏÊÇ·ñÎªÈòÄê
	scanf ("%d", &year);
	if (year%100==0)
	{
		if (year%400==0)
			printf("ÈòÄê");
		else
			printf ("Æ½Äê"); 
	 } 
	else
	{
		if (year%4==0)
			printf ("ÈòÄê");
		else 
			printf ("Æ½Äê");
	}
	
	return 0; 
}
