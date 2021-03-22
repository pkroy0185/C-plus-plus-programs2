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
             void DeleteMax();
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
void LinkedList::DeleteMax()
{
    LinkedList *temp=NULL,*traverse=NULL,*maxptr=NULL;
    int max,first;
    if(next==NULL)
    {
      cout<<"List is empty..\n";
    }
    else
     if(next->next==NULL)
     { 
        temp=next;
        next=temp->next;
        free(temp);
     }
     else
     {
        temp=next;
        max=temp->val;
        first=max;
        traverse=temp->next;
        while(traverse!=NULL)
        {
           if(traverse->val>max)
           {
              max=traverse->val;
              maxptr=temp;
           }
           traverse=traverse->next;
           temp=temp->next;
        }
        if(max==first)
        {
          temp=next;
          next=temp->next;
          free(temp);
        }
        else
        {
          temp=maxptr->next;
          maxptr->next=temp->next;
          free(temp);
        }
     }
}
int main()
{
    LinkedList A;
    int no,k;
    char ch='y';
    cout<<"This program deletes maximum element( maximum is unique in given list ) of linked list...\n";
    cout<<"Enter 'y' to continue giving input and 'n' to stop giving input...\nEnter elements of the linked list : ";
    while(ch=='y')
    {
       cin>>no;
       A.Insert(no);
       cout<<"Continue?(y/n) : ";
       cin>>ch;
    }
    A.Display();
    A.DeleteMax();
    cout<<"\nAfter deleting  Maximum element..\n ";
    A.Display();
return 0;
}