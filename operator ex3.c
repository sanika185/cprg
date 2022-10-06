//Ass:wap to solve following increment and decrrement operator equations

#include<stdio.h>

void main()
{
	int a,b,ans;
	
	//Q1
	a=20;
	b=31;
	a++;
	--b;
	ans=a+b;
	printf("\n a=%d \t b=%d \t ans=%d ",a,b,ans);
	
	//Q2
	a=12;
	b=3;
	ans=a++ + --b;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
	//Q3
	a=15;
	b=3;
	b=a++;
	a=a+ --b;
	ans=++a +10/2- --b;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
	//Q4
	a=10;
	ans=a++ + a++ + a++;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
	//Q5
	a=10;//9
	b=a<10;//0 1
	ans=a>b++ + --a <0;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans); 
	
}
