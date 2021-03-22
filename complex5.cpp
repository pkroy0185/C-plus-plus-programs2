#include<iostream>
using namespace std;
class complex
{
    float x;  //real part
    float y;  //imaginary part
    public:
           complex();
           complex(int );
           complex(int ,int );
           friend void Display(complex );
           friend complex Sum(complex ,complex);
};
complex::complex()
{  
}
complex::complex(int a)
{  
}
complex::complex(int rl,int img)
{  
    x=rl;
    y=img;
}
void Display(complex c)
{
    cout<<c.x<<"+("<<c.y<<")i";
}
complex Sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
}
int main()
{
    int rl,img;
    complex c3;
    cout<<"Enter first complex num(a and b of a+bi) :\n";
    cin>>rl>>img;
    complex c1(rl,img);
    cout<<"Enter second complex num(a and b of a+bi) :\n";
    cin>>rl>>img;
    complex c2(rl,img);
    c3=Sum(c1,c2);
    cout<<"The sum of both numbers is : \n";
    Display(c3);
    return 0;
}