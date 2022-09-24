//wap toread emp. name, department, salary and incetive.//

#include<stdio.h>

void main()

{
	char company_name[20], department[20];
	int salary,incentive;
	
	printf("\n Enter company name:");
	scanf("%s",& company_name);
	
	printf("\n Enter department:");
	scanf("%s",& department);
	
	printf("\n Enter salaray:");
	scanf("%d", &salary);
	
	printf("\n Enter incentive:");
	scanf("%d", &incentive);
	
	printf("\n company name=%s \t department=%s \t salary=%d \t incetive=%d", company_name, department, salary, incentive);
}
