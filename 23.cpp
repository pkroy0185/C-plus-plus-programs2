#include<iostream>
using namespace std;
int coin()
{ 
    return rand()%2;
}
int main()
{ 
    int i,j,n,count,prev,s;
    float prob,success=0;
    cout<<"This program finds probability of getting two consecutive heads in less than 6 tosses..."<<endl;
    cout<<"no of experiments : "; 
    cin>>n;
    for (i=1;i<=n;i++)
    { 
     prev=5;
     for(count=0,j=0;count<3;)
     {
      j++;
      if((s=coin())==0 && prev==s)
          {
           count++;
           break;
          }
      prev=s;
     }
     if(j<=5)
       success++;
    }
    prob=success/n;
    cout<<"Required probability is "<<prob<<endl;
}
    