#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct emplyee
{
   char name[20],id[10],des[20],mob[10];
   float bs,da,hra,ts;
}e1,e2,e3;
void display (struct employee e1);
int main()
{
  struct employee e;
  printf("Enter name :");
  scanf("%s %s %s",&e1.name,&e2.name,&e3.name);
  printf("Enter id :");
  scanf("%s %s %s",&e1.id,&e2.id,&e3.id);
  printf("Enter designation:");
  scanf("%s %s %s",&e1.des,&e2.des,&e3.des);
  printf("Enter basic salary:");
  scanf("%.2f %.2f %.2f",&e1.bs,&e2.bs,&e3.bs);
  e1.da=(80*e1.bs)/100;
  e2.da=(80*e2.bs)/100;
  e3.da=(80*e3.bs)/100;
  e1.hra=(20*e1.bs)/100;
  e2.hra=(20*e2.bs)/100;
  e3.hra=(20*e3.bs)/100;
  e1.ts=e1.bs+e1.da+e1.hra;
  e2.ts=e1.bs+e2.da+e2.hra;
  e3.ts=e1.bs+e2.da+e3.hra:
  display(e);
}
void display (struct employee e)
{
    printf("name\t\tid\t\tdes\t\t ts");
    printf("\n%s \t\t%s \t\t%s \t\t%.2f,e1.name,e1.id,e1.des,e1.ts);
    printf("\n%s \t\t%s \t\t%s \t\t%.2f,e2.name,e2.id,e2.des,e2.ts);
    printf("\n%s \t\t%s \t\t%s \t\t%.2f,e3.name,e3.id,e3.des,e3.ts);
}																		
