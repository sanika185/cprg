//Ass:wap to input any number. Check whether the number is positive,negative or zero.

#include<stdio.h>

void main()

{
	int no;
	
	printf("\n Enter any number:");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf("\n Number is positive");
	}
	if(no<0)
	{
		printf("\n Number is negative");
	}
	if(no==0)
	{
		printf("\n Number is zero");
	}
}
