#include<iostream>
using namespace std;
int die(int num[])
{ 
    num[0]=rand()%6+1;
    num[1]=rand()%6+1;
}
int main( )
{ 
    int i,n,num[2],count=0;
    float prob,success=0;
    cout<<"This program finds probability of getting a product of more than 20 when 2 dice are thrown given that that the sum is more than 8 ..."<<endl;
    cout<<"no of experiments : "; 
    cin>>n;
    for (i=1;i<=n;i++)
    { 
      die(num);
      if(num[0]+num[1]>8)
      {
        count++;
        if(num[0]*num[1]>20)
          success++;
      }
    }
    prob=success/count;
    cout<<" Required probability is "<<prob<<endl;
}
    