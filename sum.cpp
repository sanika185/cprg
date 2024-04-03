#include<iostream>
using namespace std;
class Sum
{
    public:int num1,num2;
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
    cout<<"sum is"<<Sum<<endl;
    return 0;
}
int main()
{
   Sum S;
   S.getdata();
   S.putdata();
   return 0;

}
