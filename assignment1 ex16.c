//Ass:wap to input marks of the student and print the result(pass/fail) using conditional operator

#include<stdio.h>
void main()
{
	int marks;
	printf("\n Enter marks of the student:");
	scanf("%d",&marks);
	if(marks>=40)
	{
		printf("\n Student is pass");
	}
	else
	{
		printf("\n student is fail");
	}
	
}
