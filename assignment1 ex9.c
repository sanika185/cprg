//Ass:wap to input principle,rate and time from the user and calculate simple intrestand total amount. Display all the values

#include<stdio.h>
void main()

{
	int p,t,r;
	float sintrest,amount;
	printf("\n Enter principle:");
	scanf("%d",&p);
	printf("\n Enter time in years:");
	scanf("%d",&t);
	printf("\n Enter rate:");
	scanf("%d",&r);
	sintrest=(p*r*t);
	amount=p+sintrest;
	printf("\n Simple intrest=%.2f",sintrest);
	printf("\n Total amount=%.2f",amount);
	
	
}
