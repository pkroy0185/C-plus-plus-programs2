#include<iostream>
using namespace std;
int coin()
{ 
    return rand()%2; 
}
int main( )
{ 
    int i,j,s,n,prev=5,count=0;
    float exp;
    cout<<"This program finds expected value of Number of Total tosses till we get two consecutive heads ..."<<endl;
    cout<<"no of experiments : "; 
    cin>>n;
    for (i=1;i<=n;i++)
    { 
      prev=5;
      for (j=0; ;j++)
      {
        if((s=coin())==0 && prev==s)
          {
           count++;
           break;
          }
        count++;
        prev=s;
      } 
    }
    exp=(float)count/n;
    cout<<" Required expected value is "<<exp<<endl;
}
    