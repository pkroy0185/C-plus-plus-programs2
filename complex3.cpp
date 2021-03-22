#include<iostream>
using namespace std;
class complex
{
    float x;  //real part
    float y;  //imaginary part
    public:
           void GetData();
           void Display();
           complex Sum(complex);
};
void complex::GetData()
{
    cout<<"Enter complex num(a and b of a+bi) :\n";
    cin>>x>>y;
    
}
void complex::Display()
{
    cout<<x<<"+("<<y<<")i";
}
complex complex::Sum(complex c1)
{
    complex c2;
    c2.x=c1.x+x;
    c2.y=c1.y+y;
    return c2;
}
int main()
{
    complex c1,c2,c3;
    c1.GetData();
    c2.GetData();
    c3=c2.Sum(c1);
    cout<<"The sum of both numbers is : \n";
    c3.Display();
    return 0;
}