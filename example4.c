//Ass:wap to input two ineger nuubers and show their addition,subtraction,multiplication,division and remainder.//

#include<stdio.h>

void main()

{
	int a,b;
	int sum,subt,mult,idiv,rem;
	float fdiv;
	
	printf("\n Enter value of a:");
	scanf("%d",&a);
	
	printf("\n Enter value of b:");
	scanf("%d",&b );
	
	sum=a+b;
	printf("\n addision= %d",sum);
	
	subt=a-b;
	printf("\nsubtraction=%d",subt);
	
	mult=a*b;
	printf("\n multiplication=%d",mult);
	
	idiv=a/b;
	printf("\n division=%d",idiv);
	
	rem=a%b;
	printf("\n remainder=%d", rem);
	
	fdiv=a/b;
	printf("\n float division=%.2f",fdiv);
	
	
}
