/*Ass:wap to input chracter and print its ASCII value*/

#include<stdio.h>
void main()
{
	char ch;
	int code;
	
	printf("\n Enter any chracter:");
	scanf("%c",&ch);
	code=(int)ch;
	printf("\n ASCII code=%d",code);
	
}
