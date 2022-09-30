/*Ass:wap to find out the quotient and remainder of two number.
(without using modulus(%)operator)[formula:a-(a/b)*b]*/

#include<stdio.h>
void main()
{
	int a,b,q,rem;
	printf("\n enter first no:");
	scanf("%d",&a);
	printf("\n enter second no:");
	scanf("%d",&b);
	q=a/b;
	rem=a-(a/b)*b;
	printf("\n Quotient=%d",q);
	printf("\n remainder=%d",rem);
	
}
