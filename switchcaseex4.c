//wap to perform area calculation for circle triangle,rectangle and square usig switch case
#include<stdio.h>
void main()
{
	int rad,height,base,length,breadth,side,choice;
	
	
	printf("\n 1.area of circle \t 2.area of triangle \t 3.area of rectangle \t 4.area of square");
	printf("\n Enter choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n radius:");
			scanf("%d",&rad);
			printf("\n area of circle=%.2f",(rad*rad*3.14));
			break;
		case 2:
			printf("\n enter height: ");
			scanf("%d",&height);
			printf("\n enter base:");
			scanf("%d",&base);
			printf("\n area of triangle=%.2f",((height*base)/2.0));
			break;
		case 3:
			printf("\n Enter length:");
			scanf("%d",&length);
			printf("\n Enter breadth:");
			scanf("%d",&breadth);
			printf("\n area of rectangle=%d",(length*breadth));
			break;
		case 4:
			printf("\n Enter side:");
			scanf("%d",&side);
			printf("\n area of square=%d",(side*side));
			
	}
}
