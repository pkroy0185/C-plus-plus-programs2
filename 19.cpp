#include<iostream>
using namespace std;
int coin(int num[])
{ 
    int s,t;
    s=rand()%5;
    t=rand()%11;
    if(s<2)
      num[0]=0;
    else
      num[0]=1;
    if(t<3)
      num[1]=0;
    else
      num[1]=1;
}
int main()
{ 
    int i,num[2],n,count=0;
    float prob,success=0;
    cout<<"This program finds probability of getting head in first coin when 2 biased (p(H)=2/5 and p(H)=3/11) coins are tossed given that both coins have different outcomes ..."<<endl;
    cout<<"no of experiments : "; 
    cin>>n;
    for (i=1;i<=n;i++)
    { 
      coin(num);
      if(num[0]!=num[1])
      {
        count++;
        if(num[0]==0)
          success++;
      }
    }
    prob=success/count;
    cout<<" Required probability is "<<prob<<endl;
}
    