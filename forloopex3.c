//wap to print prime numbers between  to 100
#include<stdio.h>
void main()
{
	int d,no,cnt;
	
	for(no=2;no<=100;no++)
	{
		cnt=0;
		for(d=2;d<=no/2;d++)
		{
			if(no%d==0)
			{
			   cnt++;
			   break;
	    	}
		}
		if(cnt==0)
		{
			printf("\t %d",no);
		}
	}
}
