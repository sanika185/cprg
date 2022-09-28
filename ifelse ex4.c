//Ass:wap to input year. check whether it is leap year or not//

#include<stdio.h>

void main()

{
	int no;
	
	printf("\n Enter any year:");
	scanf("%d",&no);
	
	if(no%4==0)
	{
		printf("\n Year is leap year");
	}
	else
	{
		printf("\n Year is not a leap year ");
	}
}
