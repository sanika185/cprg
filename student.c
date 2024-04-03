#include<stdio.h>
struct student
{
 char n[100],prn[100],eid[200],add[100],class[100],gp[100], mob[100];
 
}s1,s2,s3;
void display(struct student s);
int main()
{  
 struct student s;
 printf("enter name\n");
 scanf("%s %s %s",&s1.n,&s2.n,&s3.n);
 printf("enter prn\n");
 scanf("%s %s %s",&s1.prn,&s2.prn,&s3.prn);
 printf("enter grade point\n");
 scanf("%s %s %s",&s1.gp,&s2.gp,&s3.gp);
 printf("enter class \n:   ");
 scanf("%s %s %s",&s1.class,&s2.class,&s3.class);
 printf("enter address\n");
 scanf("%s %s %s",&s1.add,&s2.add,&s3.add);
 printf("enter mobile num\n");
 scanf("%s %s %s",&s1.mob,&s2.mob,&s3.mob);
 printf("enter email id\n");
 scanf("%s %s %s",&s1.eid,&s2.eid,&s3.eid);
 display(s);
}
void display(struct student s)
{
 printf("personal infomation");
 printf("\nname\t\tmob\t\temailid\t\taddress\n");
 printf("\n%s\t\t%s\t%s\t\t%s",s1.n,s1.mob,s1.eid,s1.add);
 printf("\n%s\t\t%s\t%s\t%s",s2.n,s2.mob,s2.eid,s2.add);
 printf("\n%s\t\t%s\t%s\t%s",s3.n,s3.mob,s3.eid,s3.add);
 printf("\n");
 printf("academic infomation");
 printf("\nname\t\tclass\t\tprn\t\tgrade point\t\n");
 printf("\n%s\t\t%s\t\t%s\t\t%s",s1.n,s1.class,s1.prn,s1.gp);
 printf("\n%s\t\t%s\t\t%s\t\t%s",s2.n,s2.class,s2.prn,s2.gp);
 printf("\n%s\t\t%s\t\t%s\t\t%s",s3.n,s3.class,s3.prn,s3.gp); 
}








    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
      
    
