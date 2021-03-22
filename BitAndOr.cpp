#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    string str1("101010101100");
    string str2("101001010011");
    bitset<16> bitvec1(str1);
    bitset<16> bitvec2(str2);
    bitset<16> bitvec3=bitvec1&bitvec2;
    bitset<16> bitvec4=bitvec1|bitvec2;
    cout<<"Bitvec1 : "<<bitvec1<<endl;
    cout<<"Bitvec2 : "<<bitvec2<<endl;
    cout<<"(Bitvec1 & Bitvec2) : "<<bitvec3<<endl;
    cout<<"(Bitvec1 | Bitvec2) : "<<bitvec4<<endl;
    return 0;
}