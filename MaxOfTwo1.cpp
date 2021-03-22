#include<iostream>
#include<limits>
using std::cin;
using std::cout;
using std::endl;
class max
{
           int m,n;
           int Largest();
    public:
           void GetData();
           void Display();
};
int max::Largest()
{
    return m>n?m:(m==n)?INT_MAX:n;
}
void max::GetData()
{
    cout<<"Enter both numbers : ";
    cin>>m>>n;
    Display();      
}
void max::Display()
{
    int Max;
    Max=Largest();
    if(Max==INT_MAX)
      cout<<"Both numbers are equal..."<<endl;
    else
      cout<<"Maximum of both numbers is "<<Max<<endl; 
}
int main()
{
    max m;
    cout<<"This program finds maximum of two numbers....\n";
    m.GetData();
    return 0;
}