#include<iostream>
using std::cin;
using std::cout;
using std:: endl;
class sample2;
class sample1
{
    int x;
    public:
          void GetData();
          friend void max(sample1 ,sample2 );
};
class sample2
{
    int y;
    public:
          void GetData();
          friend void max(sample1 ,sample2 );
};
void sample1::GetData()
{
    cout<<"Enter x : ";
    cin>>x;
}
void sample2::GetData()
{
    cout<<"Enter y : ";
    cin>>y;
}
void max(sample1 s1,sample2 s2)
{
    if(s1.x==s2.y)
      cout<<"Both Numbers are equal..."<<endl;
    else
      cout<<"Maximum of both numbers is "<<(s1.x>s2.y?s1.x:s2.y)<<endl;
}
int main()
{
    sample1 s1;
    sample2 s2;
    s1.GetData();
    s2.GetData();
    max(s1,s2);
    return 0;
}