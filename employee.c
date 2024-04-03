#include<stdio.h>
struct employee
{
    char name[100],id[100],des[100],mob[100];
    float bs,da,hra,ts;
}e1,e2,e3;
void display(struct employee e);
int main()
{
    struct employee e;
    printf("\n Enter name of employee :    ");
    scanf("%s %s %s",&e1.name,&e2.name,&e3.name);
    printf("\n Enter employee id:    ");
    scanf("%s %s %s",&e1.id,&e2.id,&e3.id);
    printf("\n Enter employee mobile number:    ");
    scanf("%s %s %s",&e1.mob,&e2.mob,&e3.mob);
    printf("\n Enter employee designation:    ");
    scanf("%s %s %s",&e1.des,&e2.des,&e3.des);
    printf("\n Enter basic salary  :    ");
    scanf("%f %f %f",&e1.bs,&e2.bs,&e3.bs);
    e1.da=(80*e1.bs)/100;
    e2.da=(80*e2.bs)/100;
    e3.da=(80*e3.bs)/100;
    e1.hra=(20*e1.bs)/100;
    e2.hra=(20*e2.bs)/100;
    e3.hra=(20*e3.bs)/100;
    e1.ts=e1.bs+e1.da+e1.hra;
    e2.ts=e2.bs+e2.da+e2.hra;
    e3.ts=e3.bs+e3.da+e3.hra;
    display(e);
}
void display(struct employee e)
{
    printf("employee details :   ");
    printf("\nname\t\t\tmobile\t\t\tid\t\t\tdesignation\t\t\tts\n");
    printf("\n%s\t\t%s\t\t%s\t\t%s\t\t%.2f",e1.name,e1.mob,e1.id,e1.des,e1.ts);
    printf("\n%s\t\t%s\t%s\t%s\t\t%.2f",e2.name,e2.mob,e2.id,e2.des,e2.ts);
    printf("\n%s\t\t%s\t%s\t%s\t\t%.2f",e3.name,e3.mob,e3.id,e3.des,e3.ts);
    printf("\n");           
}
        

        
     
    

