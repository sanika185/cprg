//Ass:wap to input any character to find its ASCII code.//

#include<stdio.h>

void main()

{
	char  ch;
	int   code;
	
	printf("\n Enter any character:");
	scanf("%c",&ch);
	
	code=(int)ch;
	
	printf("\n ASCII code=%d",code);
}
