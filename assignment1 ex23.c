/* Ass:wap to input employee code,name and basic salary of an employee and calculate
 the following values:
 a.HRA    40%of basic salary        DA   10%of basic salary
 b.CCA    5% of basic salary        GS   Basic+HRA+DA+CCA
 c.PF     10%GS                     IT   10%of GS
 d.NS     GS-(PF+IT) */
 
 #include<stdio.h>
 void main()  
 {
 	int code;
 	long salary;
 	char name;
 	float HRA,DA,CCA,GS,PF,IT,NS;
 	
 	printf("\n Enter employees code:");
 	scanf("%d",&code);
 	printf("\n Enter employees name:");
 	scanf("%s",&name);
 	printf("\n Enter basic salary:");
 	scanf("%ld",&salary);
 	
 	HRA=(40*salary)/100.0;
 	DA=(10*salary)/100.0;
 	CCA=(5*salary)/100.0;
 	GS=salary+HRA+DA+CCA;
 	PF=(10*GS)/100.0;
 	IT=(10*GS)/100.0;
 	NS=GS-(PF+IT);
 	
 	printf("\n HRA=%.2f",HRA);
 	printf("\n DA=%.2f",DA);
 	printf("\n CCA=%.2f",CCA);
 	printf("\n GS=%.2f",GS);
 	printf("\n PF=%.2f",PF);
 	printf("\n IT=%.2f",IT);
 	printf("\n NS=%.2f",NS);
 }
 
 

