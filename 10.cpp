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
             void DeleteKthElement(int );
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
void LinkedList::DeleteKthElement(int k)
{
    LinkedList *temp=NULL,*traverse=NULL;
    int count=1;
    if(next==NULL)
      cout<<"List is empty..\n";
    else
     if(k==1)
     { 
        temp=next;
        next=temp->next;
        free(temp);
     }
     else
     {
        traverse=next;
        while((traverse->next!=NULL)&&(count<k))
        {
           traverse=traverse->next;
           if(count!=1)
             temp=temp->next;
           else
             temp=next;
            count++;
        }
        if(count==k)
        {
            temp->next=traverse->next;
            free(traverse);
        }
        else
         cout<<"There is not "<<k<<"th element in the list.";
     }
}
int main()
{
    LinkedList A;
    int no,k;
    char ch='y';
    cout<<"This program deletes Kth element of linked list...\n";
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
    A.DeleteKthElement(k);
    cout<<"\nAfter deleting  Kth element..\n ";
    A.Display();
return 0;
}