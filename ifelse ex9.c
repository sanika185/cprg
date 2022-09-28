/*Ass:wap to input employee gender check whether employee is eligible for 
insurance or not 
a.employee is male and age>=25
b.employee is female and age>=21*/

#include<stdio.h>
#include<string.h>

void main()
{
	char gender[20];
	int age;
	
	printf("\n Enter gender:");
	scanf("%s",&gender);
	printf("\n Enter age:");
	scanf("%d",&age);
	
	if(strcmp(gender,"male")==0)
	{
		if(age>=25)
		{
			printf("\n Employee is eligible for insurance.");
		}
		else
		{
			printf("\n Employee is not eligible for insurance.");
		}
		
	}
	else if(strcmp(gender,"female")==0)
	{
		if(age>=21)
		{
			printf("\n Employee is eligible for insurance.");
		}
		else
		{
			printf("\n Employee is not eligible for insurance.");
		}
	}
	else
	{
		printf("\n invalid input");
	}
	
}
