//Ass:wap to solve following arithmatic and assignment aperators equations
#include<stdio.h>
void main()
{
	int a,b;
	int ans;
	
	//Q1
	a=5;
	b=3;
	ans=a+b/a-b;
	printf("/n a=%d /t b=%d /t ans=%d",a,b,ans);
	
	//Q2
	a=4;
	b=12;
	ans=b%2-a%10+b+a/2;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
	//Q3
	a=4;
	b=3;
	a+=b;//a=a+b
	b%=a;//b=b%a
	ans=(a+10*b)-(b+10/a);
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
	//Q4
	a=99;
	b=9;
	a+=99;//a=a+99=198
	b-=a+10;//b=b-a+10=-199
	ans=a+a+b-b+b+a;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
}
