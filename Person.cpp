#include<iostream>
using namespace std;
class person
{
          char name[30];
          int age;
          void Display();
    public:
           void GetData();
};
void person::GetData()
{
    cout<<"Enter Name of the person : ";
    cin.getline(name,30);
    cout<<"Enter Age of the person : ";
    cin>>age;
    Display();      
}
void person::Display()
{
    cout<<"Details of person....\n";
    cout<<"Name : ";
    cout<<name<<endl;
    cout<<"Age  : ";
    cout<<age<<endl; 
}
int main()
{
    person p1;
    cout<<"This program takes details of a person and displays it....\n";
    p1.GetData();
    return 0;
}