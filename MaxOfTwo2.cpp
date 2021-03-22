#include<iostream>
#include<limits>
using std::cin;
using std::cout;
using std::endl;
class max
{
           int m,n,large;
          
    public:
           void GetData();
           void Display();
           void Largest();
};
void max::Largest()
{
    large=m>n?m:(m==n)?INT_MAX:n;
}
void max::GetData()
{
    cout<<"Enter both numbers : ";
    cin>>m>>n;     
}
void max::Display()
{
    if(large==INT_MAX)
      cout<<"Both numbers are equal..."<<endl;
    else
      cout<<"Maximum of both numbers is "<<large<<endl; 
}
int main()
{
    max m;
    cout<<"This program finds maximum of two numbers....\n";
    m.GetData();
    m.Largest();
    m.Display();
    return 0;
}