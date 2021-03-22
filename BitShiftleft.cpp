#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    string str("00011100");
    bitset<16> bitvec1(str);
    cout<<"Bitvec1 : "<<bitvec1<<endl;
    cout<<"Bitvec1 : "<<bitvec1.to_ulong()<<endl;
    bitset<16> bitvec2=bitvec1<<3;
    cout<<"Bitvec2 : "<<bitvec2<<endl;
    cout<<"Bitvec2 : "<<bitvec2.to_ulong()<<endl;
    bitset<16> bitvec3=bitvec1>>2;
    cout<<"Bitvec3 : "<<bitvec3<<endl;
    cout<<"Bitvec3 : "<<bitvec3.to_ulong()<<endl;
    return 0;
}