//Ass:wap to input a number. If the no is even,print its square otherwise print its cube.

#include<stdio.h>
void main()
{
	int no,square,cube;
	
	printf("\n Enter any number:");
	scanf("%d",&no);
	square=no*no;
	cube=no*no*no;
	if(no%2==0)
	{
		printf("\n Square=%d",square);
	}
	else
	{
		printf("\n cube=%d",cube);
	}
	
}
