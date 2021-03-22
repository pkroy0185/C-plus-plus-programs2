#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<32> bitvec;
    int i;
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Compliment of Bitvec : "<<~bitvec<<endl;
    bitset<16> bitvec1(0xffff);
    cout<<"Bitvec1 : "<<bitvec1<<endl;
    bitset<32> bitvec2(0xffff);
    cout<<"Bitvec2 : "<<bitvec2<<endl;
    bitset<64> bitvec3(0xffffffff);
    cout<<"Bitvec3 : "<<bitvec3<<endl;
    return 0;
}