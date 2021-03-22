#include<iostream>
using namespace std;
class item
{
    int number;
    static int count;
    public:
           void GetData(int );
           void DisplayCount();
};
int item::count;
void item::GetData(int a)
{
   number=a;
   count++;
}
void item::DisplayCount()
{
   cout<<"count : "<<count<<endl;
}
int main()
{
    item a,b,c;
    cout<<"Before getting data....\n";
    a.DisplayCount();
    b.DisplayCount();
    c.DisplayCount();
    a.GetData(10);
    b.GetData(20);
    c.GetData(30);
    cout<<"After getting data....\n";
    a.DisplayCount();
    b.DisplayCount();
    c.DisplayCount();
    return 0;
}