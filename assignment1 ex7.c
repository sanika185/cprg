//Ass:wap to input 4 integers a,b,c,d and check that equation 3*a+3*b+3*c=3*d is satisfied or not

#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("\n Enter value of a:");
	scanf("%d",&a);
	printf("\n Enter value of b:");
	scanf("%d",&b);
	printf("\n Enter value of c:");
	scanf("%d",&c);
	printf("\n Enter value of d:");
	scanf("%d",&d);
	printf("\n Equation:3*a+3*b+3*c=3*d");
	
	if(3*a+3*b+3*c==3*d)
	{
		printf("\n Equation is satisfied");
	}
	else
	{
		printf("\n Equation is not satisfied");
	}
}
