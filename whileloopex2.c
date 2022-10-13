//wap to print even and odd numbers seperately from the range
#include<stdio.h>
void main()
{ 
    int m,n,t;
	printf("\n Enter m:");
	scanf("%d",&m);
	printf("\n Enter n:");
	scanf("%d",&n);
	t=m;
	printf("\n Even numbers are:");
	while(m<=n)
	{
		if(m%2==0)
		{
			printf("\t %d",m);
		}
		m++;
	}
	printf("\n Odd numbers are:");
	while(t<=n)
	{
		if(t%2==1)
		{
			printf("\t %d",t);
		}
		t++;	
	}
}
