#include<iostream>
using namespace std;
class test
{
    public:
           int m;
           mutable int n;
           test(int ,int );
};
test::test(int a,int b)
{
    m=a;
    n=b;
}
int main()
{
    const test obj(5,2);
    cout<<"m = "<<obj.m<<"\nn = "<<obj.n<<endl;
    obj.n=10;
    //obj.m=15;    error(because obj is constant)
    cout<<"m = "<<obj.m<<"\nn = "<<obj.n<<endl;
    return 0;
}