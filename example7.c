//Ass:wap to input 2 numbers and interchange or swap their values. //

#include<stdio.h>

void main()

{
	int x,y,t;
	
	printf("\n Enter first number:");
	scanf("%d", &x);
	
	printf("\n Enter second number:");
	scanf("%d",&y);
	
	printf("\n x=%d \t y=%d",x,y);
	
	t=x;
	x=y;
	y=t;
	
	printf("\n after,");
	printf("\n x=%d \t y=%d", x,y);
	
}
