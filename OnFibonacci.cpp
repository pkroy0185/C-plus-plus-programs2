#include<iostream>
#include<list>
using namespace std;
void OnBit(bitset<32> &l,int i)
{
   l.set(i);
}
int main()
{
    int pos1=1,pos2=2,temp;
    bitset<32> l;
    cout<<"BitVec :\n"<<l<<endl;
    OnBit(l,pos1);
    OnBit(l,pos2);
    while(1)
    {
      temp=pos1;
      pos1=pos2;
      pos2=temp+pos2;
      if(pos2>32)
        break;
      OnBit(l,pos2);
    }
    cout<<"Bit turned on at Fibonacci positions ...\nBitVec :\n"<<l<<endl;
    return 0;
}