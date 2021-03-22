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
             void DeleteFirstEven();
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
void LinkedList::DeleteFirstEven()
{
    LinkedList *temp=NULL,*traverse=NULL;
    int flag=0,sign=0;
    if(next==NULL)
    {
      cout<<"List is empty..\n";
      sign=1;
    }
    else
     if(((next->next==NULL)&&(next->val%2==0))||(next->val%2==0))
     { 
        temp=next;
        next=temp->next;
        free(temp);
        flag=1;
     }
     else
     {
        temp=next;
        traverse=temp->next;
        while(traverse->next!=NULL)
        {
           if(traverse->val%2==0)
           {
              temp->next=traverse->next;
              free(traverse);
              flag=1;
              break;
           }
           traverse=traverse->next;
           temp=temp->next;
        }
        if(traverse->next==NULL && flag==0 && traverse->val%2==0)
        {
           temp->next=traverse->next;
           free(traverse);
           flag=1;
        }
     }
    if(sign==0 && flag==0)
      cout<<"\nThere are no even numbers in the list.\n";
}
int main()
{
    LinkedList A;
    int no,k;
    char ch='y';
    cout<<"This program deletes first even element of linked list...\n";
    cout<<"Enter 'y' to continue giving input and 'n' to stop giving input...\nEnter elements of the linked list : ";
    while(ch=='y')
    {
       cin>>no;
       A.Insert(no);
       cout<<"Continue?(y/n) : ";
       cin>>ch;
    }
    A.Display();
    A.DeleteFirstEven();
    cout<<"\nAfter deleting  1st even element..\n ";
    A.Display();
return 0;
}