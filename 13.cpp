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
             void DeleteOddPos();
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
void LinkedList::DeleteOddPos()
{
    LinkedList *temp=NULL,*traverse=NULL;
    int count=1;
    if(next==NULL)
      cout<<"List is empty..\n";
    else
     if(next->next==NULL||next->next->next==NULL)
     { 
        temp=next;
        next=temp->next;
        free(temp);
     }
     else
     {
        temp=next;
        next=temp->next;
        free(temp);
        temp=next;
        traverse=temp->next;
        while((traverse->next!=NULL)&&(temp->next!=NULL))
        {
           temp->next=traverse->next;
           free(traverse);
           if(temp->next!=NULL)
           {
             temp=temp->next;
             traverse=temp->next;
           }
           if(traverse==NULL)
             break;
        }
        if((traverse!=NULL)&&(traverse->next==NULL))
        {
           temp->next=traverse->next;
           free(traverse);
        }
     }
}
int main()
{
    LinkedList A;
    int no,k;
    char ch='y';
    cout<<"This program deletes odd positioned elements of linked list...\n";
    cout<<"Enter 'y' to continue giving input and 'n' to stop giving input...\nEnter elements of the linked list : ";
    while(ch=='y')
    {
       cin>>no;
       A.Insert(no);
       cout<<"Continue?(y/n) : ";
       cin>>ch;
    }
    A.Display();
    A.DeleteOddPos();
    cout<<"\nAfter deleting  odd positioned elements..\n ";
    A.Display();
return 0;
}