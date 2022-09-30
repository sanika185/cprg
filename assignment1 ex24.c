//Ass:wap to input the temprature in fahrenheit and convert it into celsius and vice versa.

#include<stdio.h>
void main()
{
	float centi,fah;
	
	printf("\n Enter temprature in fahenheit:");
	scanf("%f",&fah);
	centi=5*(fah-32)/9;
	printf("\n Temprature in centigrade=%.2f",centi);
	
	printf("\n Enter temprature in centigrade:");
	scanf("%f",&centi);
	fah=(centi*9/5)+32;
	printf("\n Temprature in fahrenheit=%.2f",fah);
}
