#include<iostream>
#include<iomanip>
using namespace std;
struct employee
{
   char name[10],id[10],des[10],num[20];
   float bs,da,hra,ts;
};
int main()
{  
   struct employee e[50];
   int i,n;
   cout<<"Enter no of employee"<<endl;
   cin>>n;
   cout<<"Enter employee info"<<endl;
   for(i=0;i<n;i++)
   {
      cout<<"enter name"<<endl;
      cin>>e[i].name;
      cout<<"enter id"<<endl;
      cin>>e[i].id;
      cout<<"enter mob num"<<endl;
      cin>>e[i].num;
      cout<<"enter des"<<endl;
      cin>>e[i].des;
      cout<<"enter basic salary"<<endl;
      cin>>e[i].bs;
   }
   cout<<"Student info"<<endl;
    for(i=0;i<1;i++)
    {
       cout<<"name"<<setw(15);
      cout<<"id"<<setw(14);
      cout<<"num"<<setw(14);
      cout<<"des"<<setw(14);
      cout<<"bs"<<setw(14);
     cout<<"TS"<<endl;
     }

     for(i=0;i<n;i++)
    {
       e[i].da=(80*e[i].bs)/100;
       e[i].hra=(20*e[i].bs)/100;
       e[i].ts=e[i].bs+e[i].da+e[i].hra;
    }
    for(i=0;i<n;i++)
   {
      cout<<e[i].name<<setw(13);
      cout<<e[i].id<<setw(15);
      cout<<e[i].num<<setw(15);
      cout<<e[i].des<<setw(15);
      cout<<e[i].bs<<setw(15);
      cout<<e[i].ts<<endl;
      
   }


}

