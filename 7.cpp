#include<iostream>
using namespace std;

class LinkedList
{
     int val;
     LinkedList *next;
     public :
             LinkedList();
             void Insert(int );
             void Display();
             void SwapFirstTwo();
};
LinkedList::LinkedList()
{
   val=0;
   next=NULL;
}
void LinkedList::Insert(int no)
{
        LinkedList *temp;
        int i=1;
        temp=new LinkedList;
        if(temp==NULL)
        {
                cout<<"Memory not allocated"<<endl;
        }
        temp->val=no;
        temp->next=NULL;
        LinkedList *t=next;
        if(t==NULL)
           next=temp;
        else
        {
                while(t->next!=NULL)
                        t=t->next;
                t->next=temp;
        }
}
void::LinkedList::Display()
{
    if(next==NULL)
      cout<<"List is empty..."<<endl;
    else
    {
        cout<<"\nElements of the list are : ";
        LinkedList *temp=next;
        int i=0;
        while(temp!=NULL)
        {
            cout<<temp->val<<"\t";
            temp=temp->next;
        }
    }
}
void LinkedList::SwapFirstTwo()
{
    LinkedList *temp=NULL;
    if(next==NULL)
      cout<<"List is empty..\n";
    else
     if(next->next==NULL)
       cout<<"There is only one element in list..."<<endl;
     else
     {
       temp=next;
       next=temp->next;
       temp->next=next->next;
       next->next=temp;
     }
}
int main()
{
    LinkedList A;
    int no;
    char ch='y';
    cout<<"This program swaps first two elements of linked list...\n";
    cout<<"Enter 'y' to continue giving input and 'n' to stop giving input...\nEnter elements of the linked list : ";
    while(ch=='y')
    {
       cin>>no;
       A.Insert(no);
       cout<<"Continue?(y/n) : ";
       cin>>ch;
    }
    A.Display();
    A.SwapFirstTwo();
    cout<<"\nAfter swapping first two elements..\n ";
    A.Display();
return 0;
}