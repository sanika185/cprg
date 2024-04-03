#include<iostream>
#include<string>
#include<iomanip>
using namespace std ;
struct product {
  int product_id;
  string product_name;
  int product_price;
  float gst;
  }p[10];
int main()
{
   int i,n;
   cout<<"enter number of product\n"<<endl;
   cin>>n;
   cout<<"informatio about product\n"<<endl;
   for(i=0;i<n;i++)
   {
   cout<<"enter product id\n"<<endl;
   cin>>p[i].product_id;
   cout<<"enter product_name\n"<<endl;
   cin>>p[i].product_name;
   cout<<"enter product price\n"<<endl;
   cin>>p[i].product_price;
   cout<<"enter gst\n"<<endl;
   cin>>p[i].gst;
   }
   cout<<"display information of product\n"<<endl;
   for(i=0;i<n;i++)
   {
   cout<<p[i].product_id<<setw(10)<<p[i].product_name<<setw(20)<<p[i].product_price<<setw(20)<<p[i].gst<<endl;
   }
   return 0;
}


















  

