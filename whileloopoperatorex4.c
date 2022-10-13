/* pattern:
    1
   12
  123
 1234
12345*/
#include<stdio.h> 
void main()
{
	int r,c,s;
	
	r=1;
	while(r<=5)
	{
		s=r;
		while(s<=4)
		{
			printf("  ");
			s++;
		}
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
