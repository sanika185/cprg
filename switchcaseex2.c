//Ass:wap to perform arithmatic calculations using switch case menus
#include<stdio.h>
void main()
{
	int a,b;
	int choice;
	printf("\n Enter value of a:");
	scanf("%d",&a);
	printf("\n Enter value of b:");
	scanf("%d",&b);
	printf("\n 1. Additon \t 2.Subtraction \t 3.Multiplication \t 4.Division");
	printf("\n Enter choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\n Addition=%d",(a+b));
			break;
		case 2:
			printf("\n Subtraction=%d",(a-b));
			break;
		case 3:
			printf("\n Multiplication=%d",(a*b));
			break;
		case 4:
			printf("\n Division=%.2f",((float)a/b));
			break;
		default:
			printf("\n Invalid coice");
	}
}
