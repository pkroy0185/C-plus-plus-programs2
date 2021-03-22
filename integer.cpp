#include<iostream>
using namespace std;
class integer
{
    int m,n;
    public:
               integer(int ,int );
          void Display();
};
void integer::Display()
{
    cout<<"M = "<<m<<endl;
    cout<<"N = "<<n<<endl;
}
integer::integer(int x,int y)
{
    m=x;
    n=y;
}
int main()
{
    integer int1(10,20),int2=integer(30,40);
    int1.Display();
    int2.Display();
    return 0;
}