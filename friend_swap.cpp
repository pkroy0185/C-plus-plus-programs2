#include<iostream>
using std::cin;
using std::cout;
using std:: endl;
class sample2;
class sample1
{
    int x;
    public:
          void GetData();
          void Display();
          friend void swap(sample1 &,sample2 &);
};
class sample2
{
    int y;
    public:
          void GetData();
          void Display();
          friend void swap(sample1 &,sample2 &);
};
void sample1::GetData()
{
    cout<<"Enter x : ";
    cin>>x;
}
void sample2::GetData()
{
    cout<<"Enter y : ";
    cin>>y;
}
void sample1::Display()
{
    cout<<" x : "<<x;
}
void sample2::Display()
{
    cout<<" y : "<<y;
}
void swap(sample1 &s1,sample2 &s2)
{
    int temp=s1.x;
    s1.x=s2.y;
    s2.y=temp;
}
int main()
{
    sample1 s1;
    sample2 s2;
    s1.GetData();
    s2.GetData();
    cout<<"Before swapping...."<<endl;
    s1.Display();
    cout<<endl;
    s2.Display();
    cout<<endl;
    swap(s1,s2);
    cout<<"After swapping...."<<endl;
    s1.Display();
    cout<<endl;
    s2.Display();
    cout<<endl;
    return 0;
}