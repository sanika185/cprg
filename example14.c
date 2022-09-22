//Ass:wap to input 5 digit number and replase its last digi with product of first and last digit.ex-73819 then output=738163//

#include<stdio.h>

void main()

{
	int no;
	int reverse,rem;
	
	printf("\n Enter any five digit no:");
	scanf("%d",&no);
	
	rem=no/10;
    reverse=rem;
    
    
    rem=no%10;
    reverse=reverse*100+rem*(no/10000);
    
    printf("\n number =%d", reverse);
	
	
}
