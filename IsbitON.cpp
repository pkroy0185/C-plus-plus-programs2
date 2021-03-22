#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<32> bitvec;
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Size   : "<<bitvec.size()<<endl;
    cout<<"Is any bit  ON : "<<bitvec.any()<<endl;
    cout<<"Are no bits ON : "<<bitvec.none()<<endl;
    bitvec.flip(0);
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Is any bit  ON : "<<bitvec.any()<<endl;
    cout<<"Are no bits ON : "<<bitvec.none()<<endl;
    return 0;
}