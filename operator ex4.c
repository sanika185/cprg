//Bitwise operator//

#include<stdio.h>
void main()

{
	int a,b,ans;
	
	//Q1
	a=30;
	b=2;
	
	ans=a<<b;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
	//Q2
	a=90;
	b=1;
	ans=a<<b<<1;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
	//Q3
	a=256;
	b=4;
	ans=a>>b;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
	//Q4
	a=100;
	b=2;
	ans=a>>b<<3;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
}

/*
256		128		64		32		16		8		4		2		1
2^8		2^7		2^6		2^5		2^4		2^3		2^2		2^1		2^0
		1		1		0		0		1
*/
