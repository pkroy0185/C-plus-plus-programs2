#include<iostream>
using namespace std;
int coin(int num[])
{ 
    int i;
    for(i=0;i<3;i++)
    {
      num[i]=rand()%2;
      if(num[i]==0)
        num[3]++;
    }
}
int main()
{ 
    int i,num[4],n,count=0;
    float prob,success=0;
    cout<<"This program finds probability of getting tail in last toss when 3 coins are tossed given that the event has at least 2 heads ..."<<endl;
    cout<<"no of experiments : "; 
    cin>>n;
    for (i=1;i<=n;i++)
    { 
      num[3]=0;
      coin(num);
      if(num[3]>1)
      {
        count++;
        if(num[2]==1)
          success++;
      }
    }
    prob=success/count;
    cout<<" Required probability is "<<prob<<endl;
}
    