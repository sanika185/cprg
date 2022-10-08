/*A grade of steel graded as per the following dimentions :
 a. Hardness of steel>5600
 b.Carbon content<0.7
 c.Tensile strenth>2800
 In case of 
 1.All three conditions are correct then grade will be 10
 2.If first and second met true,then grade will be 9
 3.If first and third met true,then grade will be 8
 4.If second and third met true,then grade will be 7
 5.In case any condtion true,then grade will be 6*/
 
#include<stdio.h>
#include<string.h>
void main()
{
	int h,str;
	float c;
	
	printf("\n Enter hardness of steel:");
	scanf("%d",&h);
	printf("\n Enter carbon content:");
	scanf("%f",&c);
	printf("\n Enter Tensile strenth:");
	scanf("%d",&str);
	if(h>5600&&c<0.7&&str>2800)
	{
		printf("\n grade of the steel is 10");
	}
	else if(h>5600&&c<0.7)
	{
		printf("\n grade of the steel is 9");
	}
	else if(h>5600&&str>2800)
	{
		printf("\n grade of the steel is 8");
	}
	else if(c<0.7&&str>2800)
	{
		printf("\n grade of the steel is 7");
	}
	else if(h>5600||c<0.7||str>2800)
	{
		printf("\n grade of steel is 6");
	}
	else
	{
		printf("\n grade of steel is 5");
	}
	
}
