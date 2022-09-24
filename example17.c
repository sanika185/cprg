//Ass:wap to convert temp from centigrade to fareinheits.//

#include<stdio.h>

void main()

{
	float fah,centi;
	
	printf("\n Enter temp in centigrade:");
	scanf("%f",&centi);
	
	fah=(centi*9/5)+32;
	
	printf("\n Temp in fareinheits=%f",fah);
}
