#include<iostream>
#include<iomanip>
using namespace std;
class Sum
{
    public:int num1,num2,Sum;
    public: int getdata();
            int putdata();
};
int Sum :: getdata()
{
    cout<<"Enter 2 num"<<endl;
    cin>>num1>>num2;
   return 0;
}
int Sum :: putdata()
{
    Sum=num1+num2;
    cout<<"sum is: ";
    cout<<Sum<<endl;
    return 0;
}
int main()
{
   Sum s;
   s.getdata();
   s.putdata();
   return 0;

}
