//Wap to print following pattern 
/* pattern:********
           ********
           ********
           ********
*/
#include<stdio.h>
void main()
{
	int n,c,r;
	printf("\n Enter n:");
	scanf("%d",&n);
	r=1;
	while(r<=n)
	{
		c=1;
		while(c<=n)
		{
			printf(" *");
			c++;
		}
		printf("\n");
		r++;
	}
	
}
