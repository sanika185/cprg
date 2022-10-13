/* print patten:*
                **
                ***
                ****
*/
#include<stdio.h>
void main()
{
	int n,r,c;
	printf("\n Enter n:");
	scanf("%d",&n);
	r=1;
	
	while(r<=n)
	{
		c=1;
		while(c<=r)
		{
			printf(" *");
			c++;
		}
		printf("\n");
		r++;
	}
}
