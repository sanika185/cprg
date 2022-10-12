/*Ass:wap to input pizza size and qtys.Define a menu which contains pizza size
 and prize.Read no. and qtys and disply invoice details to customer.*/
 #include<stdio.h>
 #include<string.h>
void main()
{
	int choice,qtys,size;
	
	printf("\n 1.chocolate pizza(Rs.250)");
	printf("\n 2.Extra cheesy pizza(Rs.350)");
	printf("\n 3.Tomato salsa pizza(Rs.150)");
	printf("\n 4.Extra spicy pizza(Rs.400)");
	printf("\n 5.Olive and Herby pizza(Rs.550)");
	
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	printf("\n 1.small \t 2.medium \t 3.large \n Enter size:");
	scanf("%d",&size);
	printf("\n Enter quantity:");
	scanf("%d",&qtys);
	switch(choice)
	{
		case 1:
			switch(size)
			{
				case 1:
					printf("\n You orderderd small Chocolate pizza=%d",(250*qtys));
					break;
				case 2:
					printf("\n You ordered medium chocolate pizza=%d",(qtys*(250+250*10/100)));
					break;
				case 3:
					printf("\n You ordered large chocolate pizza =%d",(qtys*(250+250*20/100)));
			}
			break;
		case 2:
			switch(size)
			{
				case 1:
					printf("\n You orderderd small Extra cheesy pizza=%d",(350*qtys));
					break;
				case 2:
					printf("\n You ordered medium Extra cheesy pizza=%d",(qtys*(350+250*10/100)));
					break;
				case 3:
					printf("\n You ordered large Extra cheesy pizza=%d",(qtys*(350+250*20/100)));	
			}
			break;
		case 3:
			switch(size)
			{
				case 1:
					printf("\n You orderderd small Tomato salsa pizza=%d",(150*qtys));
					break;
				case 2:
					printf("\n You ordered medium Tomto salsa pizza=%d",(qtys*(150+250*10/100)));
					break;
				case 3:
					printf("\n You ordered large Tomato salsa pizza=%d",(qtys*(150+250*20/100)));
			}
			break;
		case 4:
			switch(size)
			{
				case 1:
					printf("\n You orderderd small Extra spicy pizza=%d",(400*qtys));
					break;
				case 2:
					printf("\n You ordered medium Extra spicy pizza=%d",(qtys*(400+250*10/100)));
					break;
				case 3:
					printf("\n You ordered large Extra spicy pizza=%d",(qtys*(400+250*20/100)));
			}
			break;
		case 5:
			switch(size)
			{
				case 1:
					printf("\n you orderd small olive and herby pizza=%d",(550*qtys));
					break;
				case 2:
					printf("\n You ordered medium olive and herby pizza=%d",(qtys*(550+250*10/100)));
					break;
				case 3:
					printf("\n You ordered large olive and herby pizza=%d",(qtys*(550+250*20/100)));
			}
			break;
	}
}
