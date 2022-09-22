//Ass:wap to convert temp from centigrade to fareinheits.//

#include<stdio.h>

void main()

{
	float fah,centi;
	
	printf("\n Enter temp in centigrade:");
	scanf("%f",&centi);
	
	fah=9/5*(centi+32);
	
	printf("\n Temp in fareinheits=%f",fah);
}
