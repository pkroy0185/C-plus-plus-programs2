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
             void DeleteJToK(int ,int );
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
void LinkedList::DeleteJToK(int j,int k)
{
    LinkedList *temp=NULL,*traverse=NULL;
    int count=1;
    if(next==NULL)
      cout<<"List is empty..\n";
    else
     if(j==1)
     { 
        traverse=next;
        while(traverse!=NULL)
        {
           temp=traverse;
           traverse=traverse->next;
           free(temp);
           count++;
           if(count==k)
           {
             traverse=traverse->next;
             break;   
           }
        }
        next=traverse;
     }
     else
     {
        count=2;
        temp=next;
        traverse=next->next;
        while(traverse!=NULL)
        {
           if(count==j)
           {
             while(count<=k)
             {
               temp->next=traverse->next;
               free(traverse);
               count++;
               traverse=temp->next;
             }
           }
           else
           {
             traverse=traverse->next;
             temp=temp->next;
             count++;
           }
           
        }
     }
}
int main()
{
    LinkedList A;
    int no,j,k,total=0;
    char ch='y';
    cout<<"This program deletes all elements from jth to kth positions of linked list...\n";
    cout<<"Enter 'y' to continue giving input and 'n' to stop giving input...\nEnter elements of the linked list : ";
    while(ch=='y')
    {
       cin>>no;
       A.Insert(no);
       total++;
       cout<<"Continue?(y/n) : ";
       cin>>ch;
    }
    A.Display();
    cout<<"\nEnter the value of j and k : ";
    cin>>j>>k;
    if(j<=total)
      A.DeleteJToK(j,k);
    else
    {
      cout<<"The starting position doesn't exist in the list..."<<endl;
      return -1;
    }
    cout<<"\nAfter deleting  from jth till kth element..\n ";
    A.Display();
return 0;
}