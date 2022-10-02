//Ass:wap to solve following relational,conditional and logical eqations

#include<stdio.h>
void main()
{
	int a,b,ans;
	
	//Q1
	a=39;
	b=19;
	ans=a>b;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
	//Q2
	a=7;
	b=11;
	ans=a>b==b!=0;
	printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
	
	//Q3
	a=13;
	b=12;
	ans=a>=b-8/b+a/2;
    //=13>=12-8/12+13/2
    //=13>=12-8/12+6
    //=13>=12+0+6
    //=13>=18
    printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
    
    //Q4
    a=2;
    b=8;
    //syntax:condition?true:false
    ans=a>b ? 11:12;
    printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
    
    //Q5
    a=18%3;//0
    b=a;
    ans=a!=1&&b==a||a/3>1;
    printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
    
    //Q6
    a=100;
    b=99;
    b=!a;//10
    ans=!(b>!a);
    printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
    
    //Q7
    a=8;
    b=77;
    ans=b-!a+33<!(!b)+4;//=110<5
    printf("\n a=%d \t b=%d \t ans=%d",a,b,ans);
}
