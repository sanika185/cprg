/*Ass:wap to ask user to input username1 and username2. compare and check 
whether they are same or distinct(try with any alphabet case)*/

#include<stdio.h>
#include<string.h>

void main()
{
	char uname1[20],uname2[20];
	
	printf("\n Enter username 1:");
	scanf("%s",&uname1);
	
	printf("\n Enter username 2:");
	scanf("%s",&uname2);
	
	strlwr(uname1);
	strlwr(uname2);
	
	if(strcmp(uname1,uname2)==0)
	{
		printf("\n Same");
	}
	else
	{
		printf("\n Distinct");
	}
}


