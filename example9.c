//Ass:Input 3 digit no and add its digits additions//


#include<stdio.h>

void main()

{
	int no;
	int a,b,c,sum;
	
	printf("\n Enter 3 digit number:");
	scanf("%d",&no);
	
	c=no%10;
	b=(no/10)%10;
	a=no/100;
	
	printf(" \n a=%d \t b=%d \t c=%d ",a,b,c);
	
	sum=a+b+c;
	printf("\n addition of all digits =%d",sum);
}
