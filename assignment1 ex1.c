/*Ass:wap to input roll number,name,marks and phone no of the student and 
display the values*/

#include<stdio.h>

void main()

{
	int rno,marks;
	char name[20];
	long pno;
	
	printf("\n Enter roll no of the student:");
	scanf("%d",&rno);
	printf("\n Enter name of the student:");
	scanf("%s",&name);
	printf("\n Enter marks of the student:");
	scanf("%d",&marks);
	printf("\n Enter phone no. of the student:");
	scanf("%ld",&pno);
	printf("\n  roll no=%d \t student name=%s \t marks=%d \t phone no=%ld",rno,name,marks,pno);
}


