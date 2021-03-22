#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    string str1("1000");
    bitset<32> bitvec1(str1);
    cout<<"Bitvec1 : "<<bitvec1<<endl;
    string str("1111111000000011001101");
    bitset<32> bitvec2(str,2,6);
    bitset<32> bitvec3(str,str.size()-7);
    cout<<"Bitvec2 : "<<bitvec2<<endl;
    cout<<"Bitvec3 : "<<bitvec3<<endl;
    return 0;
}