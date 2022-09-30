//Ass:wap to input radius and calculate area and circumference of the circle//

#include<stdio.h>

void main()
{
	
	float r,area,cirf;
	printf("\n Enter value of radius in decimal:");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("\n area of circle=%.2f",area);
	cirf=3.14*2*r;
	printf("\n circumference of circle=%.2f",cirf);
}
