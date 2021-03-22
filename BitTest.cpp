#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<32> bitvec;
    cout<<"Bitvec : "<<bitvec<<endl;
    bitvec.flip(0);
    bitvec.flip(3);
    bitvec.flip(7);
    bitvec.flip(31);
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"At bit 7 : "<<bitvec[7]<<endl<<"At bit 31 : "<<bitvec[31]<<endl;
    if(bitvec.test(7))
      cout<<"Bit at position 7 is ON."<<endl;
    else
      cout<<"Bit at position 7 is OFF."<<endl;
    if(bitvec.test(5))
      cout<<"Bit at position 5 is ON."<<endl;
    else
      cout<<"Bit at position 5 is OFF."<<endl;
    return 0;
}