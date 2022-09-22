//Ass:wap to input temprature in fareinheits and convert to degree centigrade.//

#include<stdio.h>

void main()

{
	float fah,centi;
	
	printf("\n Enter temp in fareinheits:");
	scanf("%f",&fah);
	
	centi=5*(fah-32)/9;
	
	printf("\n Temp incentigrades=%.2f",centi);
}
