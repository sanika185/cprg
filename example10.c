//wap to input emp name and salary calculate DA and HRA 5% and 11% resp. print allowance and gross salary //

#include<stdio.h>

void main()

{
	char emp_name[20];
	int salary;
	float da,hra,gross_salary;
	
	printf("\n Enter salary:");
	scanf("%d", &salary);
	
	da=salary*5/100;
	hra=salary*11/100;
	
	printf("\n Dearness Allowance=Rs:%.2f",da);
	printf("\n House Rent Allowance=Rs:%.2f",hra);
	
	gross_salary=salary+da+hra;
	printf("\n Gross income = Rs:%.2f",gross_salary);
	
	
}
