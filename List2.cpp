#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1,l2,l3,l4,l5;
    l1.push_front(12);
    l1.push_front(9);
    l1.push_front(7);
    l1.push_front(5);
    l1.push_front(3);
    l1.push_front(1);
    l2.push_back(0);
    l2.push_back(2);
    l2.push_back(4);
    l2.push_back(6);
    l2.push_back(8);
    l2.push_back(10);
    l2.push_back(12);
    l3.push_front(9);
    l3.push_front(3);
    l3.push_front(1);
    l4.push_back(1);
    l4.push_back(3);
    l4.push_back(5);
    l4.push_back(7);
    l5.push_front(12);
    l5.push_front(9);
    l5.push_front(7);
    l5.push_front(5);
    l5.push_front(3);
    l5.push_front(1);
    list<int>::iterator iter;
    cout<<"List1 : ";
    for(iter=l1.begin();iter!=l1.end();iter++)
       cout<<*iter<<"   ";
    cout<<endl;
    cout<<"List2 : ";
    for(iter=l2.begin();iter!=l2.end();iter++)
       cout<<*iter<<"   ";
    cout<<endl;
    cout<<"List3 : ";
    for(iter=l3.begin();iter!=l3.end();iter++)
       cout<<*iter<<"   ";
    cout<<endl;
    cout<<"List4 : ";
    for(iter=l4.begin();iter!=l4.end();iter++)
       cout<<*iter<<"   ";
    cout<<endl;
    cout<<"List5 : ";
    for(iter=l5.begin();iter!=l5.end();iter++)
       cout<<*iter<<"   ";
    cout<<endl;
    if(l1>l2)
      cout<<"List1 is larger than list2\n";
    else
      cout<<"List1 is smaller than list2\n";
    if(l1<l3)
      cout<<"List1 is smaller than list3\n";
    else
      cout<<"List1 is larger than list3\n";
    if(l1>l4)
      cout<<"List1 is larger than list4\n";
    else
      cout<<"List1 is smaller than list4\n";
    if(l1!=l5)
      cout<<"List1 is not equal to list5\n";
    else
      cout<<"List1 is equal to list5\n";
    return 0;
}