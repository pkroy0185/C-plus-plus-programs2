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
             void  LocalMaximum();
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
void LinkedList:: LocalMaximum()
{
    LinkedList *traverse1=NULL,*traverse2=NULL;
    if(next==NULL)
      cout<<"List is empty..\n";
    else
    {
      cout<<"\nLocal maximum elements are : ";
      traverse1=next->next;
      traverse2=next;
      while(traverse1->next!=NULL)
      {
         if((traverse1->val>traverse2->val)&&(traverse1->val>traverse1->next->val))
           cout<<traverse1->val<<"    ";
         traverse1=traverse1->next;
         traverse2=traverse2->next;
      }
    }
}
int main()
{
    LinkedList A;
    int no,k;
    char ch='y';
    cout<<"This program finds local maximum in a linked list...\n";
    cout<<"Enter 'y' to continue giving input and 'n' to stop giving input...\nEnter elements of the linked list : ";
    while(ch=='y')
    {
       cin>>no;
       A.Insert(no);
       cout<<"Continue?(y/n) : ";
       cin>>ch;
    }
    A.Display();
    A.LocalMaximum();
return 0;
}