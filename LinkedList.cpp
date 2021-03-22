#include<iostream>
using namespace std;

class LinkedList
{
     int val;
     LinkedList *next;
     public :
             LinkedList();
             void InsertAtPos();
             void Display();
             void Delete();
             
};
LinkedList::LinkedList()
{
   val=0;
   next=NULL;
}
void LinkedList::InsertAtPos()
{
        LinkedList *temp;
        int k,count=1;
        temp=new LinkedList;
        if(temp==NULL)
        {
           cout<<"Memory is not allocated.."<<endl;
           exit(1);
        }
        cout<<"Please enter number that has to be insert in linked list : ";
        cin>>temp->val;
        temp->next=NULL;
        cout<<"Enter the position after which u want to insert : ";
        cin>>k;
        LinkedList *t=next;
        if(t==NULL)
           next=temp;
        else
          if(k==0)
          {
             temp->next=next;
             next=temp;
          }
        else
        {
           while((t!=NULL)&&(count<k))
           {   
                if(t->next==NULL)
                  break;
                t=t->next;
                count++;
           }
           if(count<k)
           {
              t->next=temp;
           }
           else
           {
             temp->next=t->next;
             t->next=temp;
           }
        }
}
void::LinkedList::Display()
{
    if(next==NULL)
      cout<<"List is empty..."<<endl;
    else
    {
        cout<<"Elements of the list are : ";
        LinkedList *temp=next;
        int i=0;
        while(temp!=NULL)
        {
            cout<<temp->val<<"\t";
            temp=temp->next;
        }
    }
}
void LinkedList::Delete()
{
    LinkedList *traverse1=next,*temp=NULL,*traverse2=NULL;
    int no;
    if(traverse1==NULL)
    {
      cout<<"Sorry,List is empty..";
    }
    else
    {
      cout<<"Enter the number to delete : ";
      cin>>no;
      if(traverse1->val==no)
      {
        while(traverse1->val==no)
        {
           temp=traverse1;
           traverse1=traverse1->next;
           free(temp);
        }
        next=traverse1;
      }
      traverse1=next->next;
      traverse2=next;
      while(traverse1!=NULL)
      {
        if(traverse1->val==no)
        {
          traverse2->next=traverse1->next;
          temp=traverse1;
          traverse1=traverse1->next;
          free(temp);
        }
        else
        {
          traverse1=traverse1->next;
          traverse2=traverse2->next;
        }
      }
    }
}
int main()
{
    LinkedList A;
    int i,choice;
    cout<<"This program Creates a linear LinkedList and performs various operations on it...\n";
    while(1)
    {
      cout<<"Enter \n1.Insert a node\n2.Display list\n3.Delete an element : ";
      cin>>choice;
      switch(choice)
      {
        case 1:
               A.InsertAtPos(); 
               cout<<endl;
               break;
        case 2:
               A.Display();
               cout<<endl;
               break;
        case 3:
               A.Delete();
               cout<<endl;
               break;
        default:
               cout<<"WRONG OPTION....\n";
       }
    }
return 0;
}