/*Ass:wap to input the days from the user and convert it into years,weeks and days*/

#include<stdio.h> 
void main()

{
	int days;
	int years,weeks;
	
	printf("\n Enter days:");
	scanf("%d",&days);
	years=days/365;
	weeks=days/7;
	printf("\n days=%d",days);
	printf("\n weeks=%d",weeks);
	printf("\n years=%.d",years);
}
