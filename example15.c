//Ass:wap to input any 3 digit number and show its digits addition. ex-123=1+2+3//

#include<stdio.h>

void main()

{
	
	int no,sum;
	
	printf("\n enter 3 digit number:");
	scanf("%d",&no);
	
	sum=no%10+(no/10)%10+(no/100);
	
	printf("\n addition of digits=%d",sum);
	
}
