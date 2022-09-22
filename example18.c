//Ass:wap to input distance between two cities i kilometer and convert to meter, centimeter, iches and feet.//

#include<stdio.h> 

void main()

{
	int km;
	long meter,cm;
	float inch, feet;
	
	printf("\n Enter distance in kilometer:");
	scanf("%d",&km);
	
	meter=km*10000;
	printf("\n In meter=%ld",meter);
	
	cm=meter*100;
	printf("\n In centimeter=%ld",cm);
	
	inch=cm/2.54;
	printf("\n In inch=%.2f",inch);
	
	feet=inch/12;
	printf("\n In feet=%.2f",feet);
	
	
}
