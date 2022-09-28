/*Ass:wap to input student percentag and print grades checking following condition
a.score>=75:distinction
b.score>=60:first class
c.score>=50:second class
d.score>=40:pass
e.otherwise fail*/

#include<stdio.h>
void main()
{
	float pert;
	printf("\n Enter percentage:");
	scanf("%f",&pert);
	
	if(pert>=75)
	printf("\n student scored grade Distinction");
     
	else if(pert>=60)
	printf("\n student scored grade first class");
	
	else if(pert>=50)
	printf("\n student scored grade second class");
    
	else if(pert>=40)
	printf("\n student is pass");
    
	else
	printf("\n student is Fail");
    
	
}
	
	
	
	
	
