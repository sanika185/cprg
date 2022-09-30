//Ass:wap to swap the values of two integer variables

#include<stdio.h>
void main()
{
	int a,b;
	
	printf("\n Enter no. a:");
	scanf("%d",&a);
	printf("\n Enter no. b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n a=%d \t b=%d",a,b);
	
}
