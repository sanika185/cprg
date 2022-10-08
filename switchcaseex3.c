//Ass:wap to input two number and find max using switch case
#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter value of a:");
	scanf("%d",&a);
	printf("\n Enter value of b:");
	scanf("%d",&b);
	switch(a>b)
	{
		case 0:
			switch(a==b)
			{
				case 0:
				printf("\n b is max");
				break;
				case 1:
				printf("\n a and b are equal");
				break;
					
			}
			break;
		case 1:
			printf("\n a is max");
			break;
	}
}
