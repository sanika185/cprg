//Ass:wap to input any character and chck whether it is vowel or cosonent

#include<stdio.h>

void main()
{
	char ch;
	
	printf("\n Enter any chracter:");
	scanf("%c",&ch);
	
	if(ch=='a')
	printf("\n a is vowel");
	else if(ch=='e')
	printf("\n e is vowel ");
	else if(ch=='i')
	printf("\n i is vowel");
	else if(ch=='o')
	printf("\n o is vowel");
	else if (ch=='u')
	printf("\n u is vowel");
	else
	printf("\n %c is consonent",ch);
	
}
