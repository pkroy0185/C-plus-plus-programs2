#include<iostream>
using namespace std;
#define n 3
class employee
{
          char name[30];
          int age;      
    public:
           void GetData();
           void DisplayData();
};
void employee::GetData()
{
    cout<<" Name  : ";
    cin.getline(name,30);
    cout<<" Age   : ";
    cin>>age;     
}
void employee::DisplayData()
{
    cout<<"    Name : ";
    cout<<name<<endl;
    cout<<"    Age  : ";
    cout<<age<<endl; 
}
int main()
{
    employee empl[n];
    int i;
    cout<<"This program takes details of n employees and displays it....\n";
    cout<<"Enter Details of employees :\n"<<endl;
    for(i=0;i<n;i++)
    {
      cout<<"  Employee"<<i+1<<" :\n";
      empl[i].GetData();
      getchar();
    }
    cout<<"\n\nDisplaying Details of employees :\n"<<endl;
    for(i=0;i<n;i++)
    {
      cout<<"  Employee"<<i+1<<" :\n";
      empl[i].DisplayData();
    }
    return 0;
}