#include<iostream>
using namespace std;
int cnt=0;
class sample
{
    public:
           sample();
           ~sample();
};
sample::sample()
{
    cnt=cnt+1;
    cout<<"Object"<<cnt<<" created...."<<endl;
}
sample::~sample()
{
    cout<<"Object"<<cnt<<" destroyed...."<<endl;
    cnt=cnt-1;
}
int main()
{
    cout<<"Main Program...\n";
    sample a,b,c,d;
    {
       cout<<"Block1...."<<endl;
       sample e,f;
    }
    cout<<"Between Blocks...."<<endl;
    sample h,i;
    {
       cout<<"Block2...."<<endl;
       sample g;
    }
    cout<<"End Program..."<<endl;
    sample j;
    return 0;
}