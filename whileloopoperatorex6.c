#include<stdio.h> 
void main()
{
	int r,c,s;
	
	r=5;
	while(r>=1)
	{
		s=r;
		while(s>=1)
		{
			printf("  ");
			s--;
		}
		c=5;
		while(c>=r)
		{
			printf(" %d",c);
			c--;
		}
		printf("\n");
		r--;
	}
}
