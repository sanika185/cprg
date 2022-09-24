//Ass:wap to input percentage scored by student in final exam. Check whether student is pass or fail.

#include<stdio.h>

void main()

{
	float pert;
	
	printf("\n Enter percentage scored by student in last exam:");
	scanf("%f",&pert);
	
	if(pert>=40)
	{
		printf("\n congratulations! Pass");
	}
	else
	{
		printf("\n Sorry! You are fail");
	}
}
