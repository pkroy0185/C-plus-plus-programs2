#include<iostream>
using namespace std;

int main()
{
    int i;
    int *array=new int[5];
    cout<<"Enter 5 elements of the array : "<<endl;
    for(i=0;i<5;i++)
       cin>>array[i];
    cout<<"Displaying elements of the array...\n";
    for(i=0;i<5;i++)
       cout<<array[i]<<"   ";
    delete []array;
    return 0;
}