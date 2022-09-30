//Ass:wap to find out gratest of three numbers using conditional operator.

#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("\n Enter first no:");
	scanf("%d",&a);
	printf("\n Enter second no:");
	scanf("%d",&b);
	printf("\n Enter third no:");
	scanf("%d",&c);
	
	if(a>b&&a>c)
	{
		printf("\n First no is greatest");
	}
	else if(b>a&&b>c)
	{
		if(b>c)
		printf("\n Second no is gratest");
	}
	else 
	{
		printf("\n Third no is greatest");
	}
}
