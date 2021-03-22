#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<32> bitvec(0xe);
    bitset<16> bitvec1(0xff);
    bitset<32> bitvec2(0xffff);
    bitset<64> bitvec3(0xffffffff);
    unsigned long ulong=bitvec.to_ulong();
    cout<<"Ulong Bitvec : "<<ulong<<endl;
    unsigned long ulong1=bitvec1.to_ulong();
    cout<<"Ulong Bitvec1 : "<<ulong1<<endl;
    unsigned long ulong2=bitvec2.to_ulong();
    cout<<"Ulong Bitvec2 : "<<ulong2<<endl;
    unsigned long ulong3=bitvec3.to_ulong();
    cout<<"Ulong Bitvec3 : "<<ulong3<<endl;
    return 0;
}