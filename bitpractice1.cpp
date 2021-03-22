#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<32> bitvec;
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Size   : "<<bitvec.size()<<endl;
    cout<<"Bit On : "<<bitvec.count()<<endl;
    bitvec.set();
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Bit On : "<<bitvec.count()<<endl;
    bitvec.reset();
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Bit On : "<<bitvec.count()<<endl;
    bitvec.set(4);
    bitvec.set(9);
    bitvec.set(1);
    bitvec.set(31);
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Bit On : "<<bitvec.count()<<endl;
    bitvec.reset(31);
    bitvec.reset(9);
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Bit On : "<<bitvec.count()<<endl;
    bitvec.reset();
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Bit On : "<<bitvec.count()<<endl;
    bitvec.flip();
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Bit On : "<<bitvec.count()<<endl;
    bitvec.flip(1);
    bitvec.flip(3);
    bitvec.flip(7);
    bitvec.flip(31);
    cout<<"Bitvec : "<<bitvec<<endl;
    cout<<"Bit On : "<<bitvec.count()<<endl;
    return 0;
}