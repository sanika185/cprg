//Ass:wap to input two number check which is max also check for eqals(dont use else if)

#include<stdio.h>

void main()
{
	int a,b;
	
	printf("\n Ente value of a:");
	scanf("%d",&a);
	printf("\n Enter value if b:");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("\n a is max:");
	}
	else
	{
		if(a==b)
		{
			printf("\n a and b are equal");
		}
		else
		{
			printf("\n b is max");
		}
	}
}

