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
	int age,policyamt,premium;
	char gender[20],place[20],hs[20];
	
	printf("\n Enter gender of the person:");
	scanf("%s",&gender);
	printf("\n Enter age of the person:");
	scanf("%d",&age);
	printf("\n Enter place of person city or village:");
	scanf("%s",&place);
	printf("\n Enter policy amount: ");
	scanf("%d",&policyamt);
	printf("\n Enter health status excellent or poor: ");
	scanf("%s",&hs);
	
	if(strcmp(gender,"male")==0&&strcmp(place,"city")==0&&strcmp(hs,"excellent")==0
	&&age>=25&&age<=45&&policyamt>200000)
    {
    	printf("\n premium=%d",(policyamt*6/1000));
	}
	else if (strcmp(gender,"female")==0&&strcmp(place,"city")==0&&strcmp(hs,"excellent")==0
	
	&&age>=25&&age<=45&&policyamt>100000)
	{
		printf("\n premium=%d",(policyamt*3/1000));
	}
	else if (strcmp(gender,"male")==0&&strcmp(place,"villae")==0&&strcmp(hs,"poor")==0
	&&age>=25&&age<=45&&policyamt>10000)
	{
		printf("\n premium=%d",(policyamt*6/100));
	}
}
