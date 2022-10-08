//switch casw
#include<stdio.h>
void main()
{
	int digit;
	printf("\n Enter digit:");
	scanf("%d",&digit);
	switch(digit)
	{
		case 0:
			printf("\n It is zero");
			break;
	    case 1:
	    	printf("\n It is one");
	    	break;
	    case 2:
	    	printf("\n It is two");
	    	break;
	    case 3:
	    	printf("\n It is three");
	    	break;
	    case 4:
	    	printf("\n It is four");
	    	break;
	    case 5:
	    	printf("\n It is five");
	    	break;
	    default:
	        printf("\n Invalid digit");
	}
}
