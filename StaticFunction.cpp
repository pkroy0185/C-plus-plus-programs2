#include<iostream>
using namespace std;
class test
{
    int code;
    static int count;
    public:
           void SetCode();
           void ShowCode();
           static void ShowCount();
};
int test::count;
void test::SetCode()
{
   code=++count;
}
void test:: ShowCode()
{
   cout<<"Object Number : "<<code<<endl;
}
void test:: ShowCount()
{
   cout<<"Count is "<<count;
}
int main()
{
    test t1,t2;
    t1.SetCode();
    t2.SetCode();
    test::ShowCount();
    cout<<endl;
    test t3;
    t3.SetCode();
    test::ShowCount();
    cout<<endl;
    t1.ShowCode();
    t2.ShowCode();
    t3.ShowCode();
    return 0;
}