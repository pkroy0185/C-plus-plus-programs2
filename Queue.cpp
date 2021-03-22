#include<iostream>
using namespace std;
class Queue
{
    int data;
    class Queue *next;
    public:
          Queue();
          Queue* CreateNode(int );
          void Enqueue(int );
          void Dequeue();
          void Display();
};
Queue *front=NULL,*rear=NULL;
Queue::Queue()
{
    data=0;
    next=NULL;
}
Queue* Queue::CreateNode(int no)
{
    Queue *node=new Queue;
    if(node==NULL)
      return NULL;
    else
    {
       node->data=no;
       node->next=NULL;
       return node;
    }
}
void Queue::Enqueue(int no)
{
    Queue *node=CreateNode(no);
    if(node==NULL)
    {
       cout<<"Cannot allocate memory..."<<endl;
    }
    else
    {
       if(next==NULL)
       {
          next=front=rear=node;
       }
       else
       {
          rear->next=node;
          rear=node;
       }
    }
}
void Queue::Dequeue()
{
    Queue *temp=NULL;
    if(next==NULL)
      cout<<"Queue is empty...\n";
    else
      if(front==rear)
      {
         temp=front;
         next=front=rear=NULL;
         free(temp);
      }
    else
    {
      temp=front;
      front=front->next;
      cout<<"Deleted element is : "<<temp->data<<endl;
      free(temp);
    }
}
void Queue::Display()
{
   Queue *traverse=NULL;
   if(front==NULL)
     cout<<"\nQueue is empty...\n\n";
   else
   {
     traverse=front;
     cout<<"\n\nElements of stack are :";
     while(traverse!=NULL)
     {
         cout<<traverse->data<<"   ";
         traverse=traverse->next;
     }
   }
}
int main()
{
    int choice,no;
    Queue A;
    cout<<"This program Creates a Queue and performs various operations on it...\n";
    while(1)
    {
      cout<<"Enter \n1.Enqueue \n2.Dequeue \n3.Display the queue : ";
      cin>>choice;
      switch(choice)
      {
        case 1:
               cout<<"Enter the element to enqueue : ";
               cin>>no;
               A.Enqueue(no); 
               cout<<endl;
               break;
        case 2:
               A.Dequeue();
               cout<<endl;
               break;
        case 3:
               A.Display();
               cout<<endl;
               break;
        default:
               cout<<"WRONG OPTION....\n";
       }
    }
    return 0;
}