/*print following pattern:
1
12
123
1234
12345*/
#include<stdio.h>
void main()
{
	int n,c,r;
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			printf(" %d",c);
			c++;
		}
		printf("\n");
		r++;
		
	}
}
