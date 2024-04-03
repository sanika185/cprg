#include<stdio.h>
struct student
{
      char class[30],prn[30],name[30];
      long mob;
      float grade;
}s1,s2,s3;
void display(struct student s);
 void main()

{
    struct student s;
     
     printf("Enter names\n");
     scanf("%s%s%s",&s1.name,&s2.name,&s3.name);
     printf("Enter num");
     scanf("%ld%ld%ld",&s1.mob,&s2.mob,&s3.mob);
     printf("Enter class");
     scanf("%s%s%s",&s1.class,&s2.class,&s3.class);
     printf("Enter PRN");
     scanf("%s%s%s",&s1.prn,&s2.prn,&s3.prn);
     printf("Enter grade");
     scanf("%f%f%f",&s1.grade,&s2.grade,&s3.grade);
     
     
     display(s);
}
void display(struct student s)
{
     struct student s;
     printf("\n name\t\tmob\t\tclass\t\tprn\t\tgrade\n");
     printf("\n%s\t\t%ld\t\t%s\t\t%s\t\t%f",s1.name,s1.mob,s1.class,s1.prn,s1.grade);
     printf("\n%s\t\t%ld\t\t%s\t\t%s\t\t%f",s2.name,s2.mob,s2.class,s2.prn,s2.grade);
     printf("\n%s\t\t%ld\t\t%s\t\t%s\t\t%f",s3.name,s3.mob,s3.class,s3.prn,s3.grade);
}


