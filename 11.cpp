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
             void DeleteFirstK(int );
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
void LinkedList::DeleteFirstK(int k)
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
        while((traverse->next!=NULL)&&(count<=k))
        {
           temp=traverse;
           traverse=traverse->next;
           free(temp);
           count++;
        }
        if((traverse->next==NULL)&&(count==k||count!=k))
        {
           next=NULL;
           free(traverse);
        }
        else
          next=traverse;
     }
}
int main()
{
    LinkedList A;
    int no,k;
    char ch='y';
    cout<<"This program deletes first k element of linked list...\n";
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
    A.DeleteFirstK(k);
    cout<<"\nAfter deleting  first k elements..\n ";
    A.Display();
return 0;
}