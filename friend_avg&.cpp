#include<iostream>
using namespace std;
class avg
{
    float x,y,Avg;
public:
    void GetData();
    void Display();
    friend void Average(avg &);
};
void avg::GetData()
{
    cout<<"Enter the values : ";
    cin>>x>>y;
}
void avg::Display()
{
    cout<<"Average of both x and y is "<<Avg<<endl;
}
void Average(avg &a)
{
    a.Avg=(a.x+a.y)/2;
}
int main()
{
    avg a;
    a.GetData();
    Average(a);
    a.Display();
    return 0;
}