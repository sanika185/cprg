/*Ass:wap to print person is eligible for policy or not in following cases
case 1:gender=male and age is between 25to 45 and place is city and health 
status is excellent and policy amount is greater than 200000 then person 
should pay rs.6 per thousand as premium amount for the policy. 

case 2:gender=female and age is between 25 to 45 and health status is 
excellent and policy amount is greater than 100000 then person should pay
rs.3 per thousand as premium for the policy.

case 3:gender=male and age is between 25 to 45 and place is village and 
health status is poor and policy amount is greater than 10000 then person 
should pay 6% as prmium amount for the policy*/

#include<stdio.h>
#include<stdio.h>
void main()
{
	int age,amount,premium;
	char gender,place,hs;
	
	printf("\n Enter gender of the person:");
	scanf("%s",&gender);
	printf("\n Enter age of the person:");
	scanf("%d",&age);
	printf("\n Enter place of person city or village:");
	scanf("%s",&place);
	printf("\n Enter policy amount: ");
	scanf("%d",&amount);
	printf("\n Enter health status excellent or poor: ");
	scanf("%s",&hs);
	
	if(strcmp(gender,"male")&&strcmp(place,"city")&&strcmp(hs,"excellent")&&age>=25&&age<=45)
    {
    	printf("\n ok");
	}
}
