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
             int KthElement(int );
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
int LinkedList::KthElement(int k)
{
    LinkedList *traverse=NULL;
    int count=1;
    if(next==NULL)
      return INT_MIN;
    else
    {
      traverse=next;
      while(count<k)
      {
         traverse=traverse->next;
         count++;
      }
      return traverse->val;
    }
}
int main()
{
    LinkedList A;
    int no,k;
    char ch='y';
    cout<<"This program finds kth element of linked list...\n";
    cout<<"Enter 'y' to continue giving input and 'n' to stop giving input...\nEnter elements of the linked list : ";
    while(ch=='y')
    {
       cin>>no;
       A.Insert(no);
       cout<<"Continue?(y/n) : ";
       cin>>ch;
    }
    A.Display();
    cout<<"\nEnter the value of k : ";
    cin>>k;
    no=A.KthElement(k);
    if(no==INT_MIN)
      cout<<"\nList is empty...\n";
    else
      cout<<"\n"<<k<<"th element of list is "<<no<<endl;
return 0;
}