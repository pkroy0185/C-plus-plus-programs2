#include<iostream>
using namespace std;
class test 
{ 
    int x,y;
    public:
          void GetData();
          friend void Display(test );
};
void test::GetData()
{
    cout<<"Enter the values : ";
    cin>>x>>y;
}
void Display(test t)
{
    cout<<"x : "<<t.x<<"    y : "<<t.y<<endl;   
}
int main()
{
    test t;
    t.GetData();
    cout<<"Displaying the values of x and y.....\n";
    Display(t);
    return 0;
}