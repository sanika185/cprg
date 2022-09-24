//Ass:wap to input username,age,height and weight//

#include<stdio.h>

void main()

{
	char username[20];
	int age;
	float height,weight;
	
	printf("\n enetr your name:");
	scanf("%s",&username);
	
	printf("\n enter your age:");
	scanf("%d",&age);
	
	printf("\n enter your height:");
	scanf("%f",&height);
	
	printf("\n enter yor weight:");
	scanf("%f",&weight);
	
	printf("\n username=%s \t age=%d \t height=%.2f \t weight=%.2f",username,age,height,weight);
}

