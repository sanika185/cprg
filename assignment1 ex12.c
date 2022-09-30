//Ass:wap to input a number and print its equivalent character code

#include<stdio.h>
void main()

{
	int no;
	char ch;
	
	printf("\n Enter any number:");
	scanf("%d",&no);
	ch=(char)no;
	printf("\n Equivalent charcter code=%c",ch);
}
