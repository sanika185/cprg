//Ass:wap to input width and height of a rectangle and calculate the area and perimeter.

#include<stdio.h>
void main()
{
	int w,h,area,per;
	
	printf("\n Enter width of rectangle:");
	scanf("%d",&w);
	printf("\n Enter height of rectngle:");
	scanf("%d",&h);
	
	area=w*h;
	per=2*(w+h);
	
	printf("\n Area=%d",area);
	printf("\n Perimeter=%d",per);
}



