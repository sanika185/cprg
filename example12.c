//Ass:wap to input ASCII code to find character.//

#include<stdio.h>

void main()

{
	char ch;
	int  code;
	
	printf("\n Enter any ASCII code:");
	scanf("%d",&code);
	
	ch=(char)code;
	
	printf("\n character=%c",ch);
	
}
