#include<iostream>
#include<list>
using namespace std;

int main()
{
    const int SIZE=4;
    int a[4]={2,6,4,8};
    list<int> l1,l2;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(4);
    l1.push_front(3);
    list<int>::iterator i;
    for(i=l1.begin();i!=l1.end();i++)
        cout<<*i<<"    ";
    cout<<endl;
    l2.insert(l2.begin(),a,a+SIZE);
    for(i=l2.begin();i!=l2.end();i++)
        cout<<*i<<"    ";
    cout<<endl;
    l1.splice(l1.end(),l2);
    for(i=l1.begin();i!=l1.end();i++)
        cout<<*i<<"    ";
    cout<<endl;
    l1.sort();
    for(i=l1.begin();i!=l1.end();i++)
        cout<<*i<<"    ";
    cout<<endl;
    l1.unique();
    for(i=l1.begin();i!=l1.end();i++)
        cout<<*i<<"    ";
    cout<<endl;
    l2.insert(l2.begin(),a,a+SIZE);
    for(i=l2.begin();i!=l2.end();i++)
        cout<<*i<<"    ";
    cout<<endl;
    l1.assign(l2.begin(),l2.end());
    for(i=l1.begin();i!=l1.end();i++)
        cout<<*i<<"    ";
    cout<<endl;
    l1.sort();
    l2.sort();
    l1.merge(l2);
    for(i=l1.begin();i!=l1.end();i++)
        cout<<*i<<"    ";
    cout<<endl;
    
    l1.remove(4);
    for(i=l1.begin();i!=l1.end();i++)
        cout<<*i<<"    ";
    cout<<endl;
    return 0;
}