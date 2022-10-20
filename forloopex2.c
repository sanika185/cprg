//wap to inut no and check whther it is prim no or not
#include<stdio.h>
void main()
{
	int no,d,cnt=0;
	printf("\n Enter any number:");
	scanf("%d",&no);
	for(d=2;d<no/2;d++)
	{
		if(no%d==0)
		cnt++;
	}
	if(cnt==0)
	{
		printf("\n number is prime");
	}
}
