#include<stdio.h>
#include<string.h>
void main()
{
	int choice,qtys,amount;
	char size[20];
	
	printf("\n 1.Chocolate pizaa(250));
	printf("\n 2.Extra cheesy pizza(350));
	printf("\n 3.Tomato salsa pizza(150));
	printf("\n 4.Extra spicy pizza(400));
	printf("\n Olive and Herby pizza(550));
	
	printf("\n choice:");
	scanf("%d",&choice);
	printf("\n quantity:");
	scanf("%d",&qtys);
	printf("\n Size:");
	scanf("%s",&size);
	
	switch(strcmp(size,"small")==0)
	{
		switch(choice)
		{
			case 1:
				amount=qtys*250;
				break;
			case 2:
				amount=350*qtys;
			    break;
			case 3:
				amount=150*qtys;
				break;
			case 4:
				amount=400*qtys;
				break;
			case 5:
				amount=550*qtys;
				break;
				
     	          }
	}
	switch (strcmp(size,"medium")==0)
	{
		switch(choice)
		{
			case 1:
				amount=qtys*250+(250*10/100);
				break;
			case 2:
				amount=qtys*350+(350*10/100);
				break;
			case 3:
				amount=qtys*150+(150*10/100);
				break;
			case 4:
				amount=qtys*400+(400*10/100);
			    break;
			case 5:
				amount=qtys*550+(550*10/100);
				break;
		}
	}
	switch(strcmp(size,"large")==0)
	{  
	     switch(choice)
	     {
	     	case 1:
				amount=qtys*250+(250*20/100);
				break;
			case 2:
				amount=qtys*350+(350*20/100);
				break;
			case 3:
				amount=qtys*150+(150*20/100);
				break;
			case 4:
				amount=qtys*400+(400*20/100);
			    break;
			case 5:
				amount=qtys*550+(550*20/100);
				break;
	     	
		 }
	    
	}
	system("cls");
	printf("\n>>>>>Bill<<<<<");
	printf("\n size:%s",size);
	printf("\n Total amount=%d",amount);
	       
}
