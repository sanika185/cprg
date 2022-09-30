//Ass:wap to input two numbers and print quotient and remainder.

#include<stdio.h>
void main()
{
	int a,b,q,rem;
	
	printf("\n Enter no.1:");
	scanf("%d",&a);
	printf("\n Enter no.b:");
	scanf("%d",&b);
	q=a/b;
	rem=a%b;
	printf("\n Quotient=%d",q);
	printf("\n Remainder=%d",rem);
}
