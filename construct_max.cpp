#include<iostream>
#include<limits>
using namespace std;
class max1
{
    int m,n;
    public:
                max1();
           void Display();
           int  Largest();
};
max1::max1()
{
    cout<<"Enter m and n : ";
    cin>>m>>n;
}
int max1::Largest()
{
    if(m==n)
      return INT_MAX;
    else
      return (m>n?m:n);
}
void max1::Display()
{
    int m=Largest();
    if(m==INT_MAX)
      cout<<"Both Numbers are equal..\n";
    else
      cout<<"Largest of both numbers is "<<m<<endl;
}
int main()
{
    max1 M;
    M.Display();
}