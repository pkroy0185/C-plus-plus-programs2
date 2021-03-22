#include<iostream>
using namespace std;
int coin()
{ 
    return rand()%2; 
}
int main( )
{ 
    int i,c,a,n,k,count;
    float success=0;
    cout<<"This program finds total number of tosses till we get 4 consecutive heads..."<<endl;
    cout<<"Enter the value of k : ";
    cin>>k;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
       for(c=0,count=0;c<k;count++)
       {
          a=coin();
          if(a==0)
            c++;
          else 
            c=0;
       }
       success=success+count;
    }
    cout<<"Expected Number of tosses  is "<<success/n<<endl;
}
    