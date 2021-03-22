#include<iostream>
using namespace std;
int coin()
{ 
    return rand()%2;
}
int main()
{ 
    int i,j,n,count;
    float prob,success=0;
    cout<<"This program finds probability of getting two heads in less than 5 tosses..."<<endl;
    cout<<"no of experiments : "; 
    cin>>n;
    for (i=1;i<=n;i++)
    { 
     for(count=0,j=0;count<3;)
     {
      j++;
      if(coin()==0)
        count++;
      if(count==2)
        break;
     }
     if(j<=4)
       success++;
    }
    prob=success/n;
    cout<<"Required probability is "<<prob<<endl;
}
    