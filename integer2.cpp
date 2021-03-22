#include<iostream>
using namespace std;
class integer
{
    int m,n;
    public:
               integer();
               integer(int ,int );
          void Display();
};
integer::integer()
{
    m=0;
    n=0;
}
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
    integer int1(10,20),int2(30,40);
    integer int3,int4;
    int1.Display();
    int2.Display();
    int3.Display();
    int4.Display();
    return 0;
}