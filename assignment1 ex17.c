//Ass:wap  to input inches from the user and convert it into yards,feet.

#include<stdio.h>
void main()
{
	int inches;
	float yards,feet;
	printf("\n Enter value in inches:");
	scanf("%d",&inches);
	yards=(inches)/36.0;
	feet=(inches)/12.0;
	printf("\n yards=%.2f",yards);
	printf("\n feet=%.2f",feet);
}
