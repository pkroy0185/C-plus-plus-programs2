#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<32> bitvec;
    int i;
    cout<<"Bitvec : "<<bitvec<<endl;
    for(i=0;i!=32;i+=2)
       bitvec[i]=1;
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Positions where bits are turned on :\n";
    for(i=0;i!=32;i+=2)
       if(bitvec[i])
         cout<<i<<"   ";
    cout<<endl;
    return 0;
}