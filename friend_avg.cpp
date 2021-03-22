#include<iostream>
using namespace std;
class avg 
{ 
    int x,y;
    public:
          void GetData();
          friend float Average(avg );
};
void avg::GetData()
{
    cout<<"Enter the values : ";
    cin>>x>>y;
}
float Average(avg a)
{
    return (float)(a.x+a.y)/2;   
}
int main()
{
    avg a;
    a.GetData();
    cout<<"Average of both x and y is "<<Average(a)<<endl;
    return 0;
}