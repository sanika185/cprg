/*Ass:wap to input roll no,name and marks of a student in five subjects and calculate 
the total and average marks*/

#include<stdio.h>
void main()
{
	int rno,phy,chem,math,bio,eng;
	char name[20];
	float average;
	
	printf("\n Enter student roll no:");
	scanf("%d",&rno);
	printf("\n Enter student name:");
	scanf("%s",&name);
	printf("\n Enter marks in physics:");
	scanf("%d",&phy);
	printf("\n Enter marks in chemistry:");
	scanf("%d",&chem);
	printf("\n Enter marks in mathematics:");
	scanf("%d",&math);
	printf("\n Enter marks in biology:");
	scanf("%d",&bio);
	printf("\n Enter marks in english:");
	scanf("%d",&eng);
	average=(phy+chem+math+bio+eng)/5.0;
	
	
	printf("\n roll no=%d \t name=%s",rno,name);
	
	printf("\n Marks:");
	printf("\n physics=%d \t chemistry=%d \t mathematics=%d \t biology=%d \t english=%d",phy,chem,math,bio,eng);
    printf("\n average marks=%.2f",average);
}
