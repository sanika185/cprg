//Ass:wap to find out area of triangle.

#include<stdio.h>
void main()

{
	int h,b;
	float area;
	
	printf("\n Enter height of triangle:");
	scanf("%d",&h);
	printf("\n Enter base of triangle:");
	scanf("%d",&b);
	
	area=(h*b)/2.0;
	
	printf("\n Area of triangle=%.2f",area);
}
