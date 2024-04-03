#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
   public :char name[10],prn[10],num[10],email[20];
   public: float grade;
};
int Student :: getdata()
{  
  
   int i;
   
   cout<<"Enter student info"<<endl;
   
      cout<<"enter name"<<endl;
      cin>>name;
      cout<<"enter prn"<<endl;
      cin>>prn;
      cout<<"enter num"<<endl;
      cin>>num;
      cout<<"enter email"<<endl;
      cin>>email;
      cout<<"enter grade"<<endl;
      cin>>grade;
 
}
int Student :: putdata()
{
   
   int i;

   cout<<"Student info"<<endl;
    for(i=0;i<1;i++)
    {
        cout<<"name"<<setw(15);
      cout<<"prn"<<setw(20);
      cout<<"num"<<setw(20);
      cout<<"email"<<setw(16);

      cout<<"grade"<<endl;
     }

      cout<<name<<setw(15);
      cout<<prn<<setw(20);
      cout<<num<<setw(15);
      cout<<email<<setw(15);

      cout<<grade<<endl;
      
}
int main()
{
   Student i,s[i],n=2;
   
   for(i=0;i<n;i++)
  {
   s.getdata();
   s.putdata();
  }
   

}
   


