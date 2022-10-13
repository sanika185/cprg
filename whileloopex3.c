//wap toprint numbers between the range which are in the multiple of 5.
#include<stdio.h>
void main()
{
	int m,n;
	printf("\n Enter m:");
	scanf("%d",&m);
	printf("\n Enter n:");
	scanf("%d",&n);
	while(m<=n)
	{
		if(m%5==0)
		{
			printf("\t %d",m);
		}
		m++;
	}
}
