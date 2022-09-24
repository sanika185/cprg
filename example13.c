//Ass:wap to input 3 digit number and print its reverse.ex-123=321.//

#include<stdio.h>

void main()

{
	int no,reverse,rem;
	
	printf("\n Enter 3 digit number:");
	scanf("%d",&no);
	
	rem=no%10;
	reverse=rem;
	
	no=no/10;
	rem=no%10;
	reverse=reverse*10+rem;
	
	no=no/10;
	rem=no%10;
	reverse=reverse*10+rem;
	
	printf("\n Reverse=%d",reverse);
}
