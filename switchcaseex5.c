//wap to input any number and check whether it is even or odd using switch case
#include<stdio.h>
void main()
{
	int no;
	printf("\n Enter any number :");
	scanf("%d",&no);
	switch(no%2==0)
	{
		case 0:
			printf("\n Number is odd");
			break;
		case 1:
			printf("\n Number is even");
			break;
	}
}
