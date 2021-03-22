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
             void DeleteLastK(int ,int );
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
void LinkedList::DeleteLastK(int k, int total)
{
  LinkedList *temp=NULL,*traverse=NULL,*t=NULL;
  int count=1,limit;
  if(k!=0)
  {
    if(next==NULL)
      cout<<"List is empty..\n";
    else
     if((total-k)<=0)
     { 
        if(total==1)
        {
           temp=next;
           next=NULL;
           free(temp);
        }
        else
        {
          traverse=next;
          while(traverse->next!=NULL)
          {
             temp=traverse;
             traverse=traverse->next;
             free(temp);
          }
          next=NULL;
          free(traverse);
        }
     }
     else
     {
        limit=total-k;
        traverse=next;
        while(count<=limit)
        {
           temp=traverse;
           traverse=traverse->next;
           count++;
        }
        t=traverse;
        while(traverse->next!=NULL)
        {
           traverse=traverse->next;
           free(t);
           t=traverse;
        }
        free(t);
        temp->next=NULL;
     }
  }
}
int main()
{
    LinkedList A;
    int no,k,total=0;
    char ch='y';
    cout<<"This program deletes last k element of linked list...\n";
    cout<<"Enter 'y' to continue giving input and 'n' to stop giving input...\nEnter elements of the linked list : ";
    while(ch=='y')
    {
       cin>>no;
       A.Insert(no);
       cout<<"Continue?(y/n) : ";
       cin>>ch;
       total++;
    }
    A.Display();
    cout<<"\nEnter the value of k : ";
    cin>>k;
    A.DeleteLastK(k,total);
    cout<<"\nAfter deleting  last k elements..\n ";
    A.Display();
return 0;
}