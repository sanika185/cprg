//wap to find factorial using while loop.
#include<stdio.h>
void main()
{
	int no,f,i;
	printf("\n Enter no:");
	scanf("%d",&no);
	i=f=1;
	while(i<=no)
	{   
		f=f*i;
		i++;
	}
	printf("\n Factorial of no=%d",f);
}
