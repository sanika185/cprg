//wap to print fibonancil series
#include<stdio.h>
void main()
{
	int n,first,second,next;
	printf("\n Enter nth value:");
	scanf("%d",&n);
	
	first=0;
	second=1;
	next=1;
	while(next<=n)
	{
		next=first+second;
		printf("\t %d",next);
		first=second;
		second=next;
	}
}
