#include<iostream>
using namespace std;
class test
{
    int id;
    public:
                test();
                test(int );
                test(test &);
           void Display();
};
test::test()
{
    id=0;
    cout<<"Default constructor....\n";
}
test::test(int a)
{
    cout<<"One argument constructor....\n";
    id=a;
}
test::test(test &x)
{
    cout<<"Copy constructor....\n";
    id=x.id;
}
void test::Display()
{
    cout<<id<<endl;
}
int main()
{
    test A(10),B(A);
    cout<<"A = ";
    A.Display();
    cout<<"B = ";
    B.Display();
    test C=A,D;
    D=A;
    cout<<"C = ";
    C.Display();
    cout<<"D = ";
    D.Display();
    return 0;
}