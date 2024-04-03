#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
   char name[10],prn[10],num[10],email[20];
   float grade;
};
int main()
{  
   struct student s[50];
   int i,n;
   cout<<"Enter no of student"<<endl;
   cin>>n;
   cout<<"Enter student info"<<endl;
   for(i=0;i<n;i++)
   {
      cout<<"enter name"<<endl;
      cin>>s[i].name;
      cout<<"enter prn"<<endl;
      cin>>s[i].prn;
      cout<<"enter num"<<endl;
      cin>>s[i].num;
      cout<<"enter email"<<endl;
      cin>>s[i].email;
      cout<<"enter grade"<<endl;
      cin>>s[i].grade;
   }
   cout<<"Student info"<<endl;
    for(i=0;i<1;i++)
    {
        cout<<"name"<<setw(15);
      cout<<"prn"<<setw(20);
      cout<<"num"<<setw(20);
      cout<<"email"<<setw(16);

      cout<<"grade"<<endl;
     }

    for(i=0;i<n;i++)
   {
      cout<<s[i].name<<setw(15);
      cout<<s[i].prn<<setw(20);
      cout<<s[i].num<<setw(15);
      cout<<s[i].email<<setw(15);

      cout<<s[i].grade<<endl;
      
   }


}

