//Ass:wap to input storage capacity in gigabytes ad convert to mb,kb,bytes and in bits.//

#include<stdio.h>

void main()

{
	int gb,mb;
	long kb,bytes;
	double bits;
	
	printf("\n Enter storage capacity in giga bytes:");
	scanf("%d",&gb);
	
	mb=gb*1024;
	printf("\n Storage in mega bytes=%d",mb);
	
	kb=mb*1024;
	printf("\n Storage in kilo bytes= %ld",kb);
	
	bytes=kb*1024;
	printf("\n Storage in bytes= %ld",bytes);
	
	bits=bytes*8.0;
	printf("\n Storage in bits=%.2lf",bits);
}
