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
             int  FindLocation(int );
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
int LinkedList::FindLocation(int no)
{
    LinkedList *traverse=NULL;
    int count=1;
    if(next==NULL)
      return INT_MIN;
    else
    {
      traverse=next;
      while(traverse->val!=no)
      {
         traverse=traverse->next;
         count++;
      }
      return count;
    }
}
int main()
{
    LinkedList A;
    int no,k;
    char ch='y';
    cout<<"This program finds location of an element in linked list...\n";
    cout<<"Enter 'y' to continue giving input and 'n' to stop giving input...\nEnter elements of the linked list : ";
    while(ch=='y')
    {
       cin>>no;
       A.Insert(no);
       cout<<"Continue?(y/n) : ";
       cin>>ch;
    }
    A.Display();
    cout<<"\nEnter the no to search : ";
    cin>>no;
    k=A.FindLocation(no);
    if(k==INT_MIN)
      cout<<"\nElement is not found in list ...\n";
    else
      cout<<"\nThe location of given element is "<<k<<endl;
return 0;
}