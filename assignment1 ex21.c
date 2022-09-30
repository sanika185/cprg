/*Ass:wap to input 2 choice(1/2).If choice is one print area otherwise print the 
circumference of circle.Input radius from the user.*/

#include<stdio.h>
void main()
{
	int rad,no;
	float cir,area;
	
	printf("\n Enter radius of circle:");
	scanf("%d",&rad);
	printf("\n choose 1 or 2:");
	scanf("%d",&no);
	
	cir=2*3.14*rad;
	area=3.14*rad*rad;
	
	if(no==1)
	{
		printf("\n circumference=%.2f",cir);
	}
	else
	{
		printf("\n area=%.2f",area);
	}
}
