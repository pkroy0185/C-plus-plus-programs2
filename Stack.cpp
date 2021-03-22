#include<iostream>
using namespace std;
class Stack
{
    int data;
    class Stack *next;
    public:
          Stack();
          Stack* CreateNode(int );
          void Push(int );
          void Pop();
          void Display();
};
Stack::Stack()
{
    data=0;
    next=NULL;
}
Stack* Stack::CreateNode(int no)
{
    Stack *node=new Stack;
    if(node==NULL)
      return NULL;
    else
    {
       node->data=no;
       node->next=NULL;
       return node;
    }
}
void Stack::Push(int no)
{
    Stack *node=CreateNode(no);
    if(node==NULL)
    {
       cout<<"Cannot allocate memory..."<<endl;
    }
    else
    {
       if(next==NULL)
       {
          next=node;
       }
       else
       {
          node->next=next;
          next=node;
       }
    }
}
void Stack::Pop()
{
    Stack *temp=NULL;
    if(next==NULL)
      cout<<"Stack is empty...\n";
    else
    {
      temp=next;
      next=temp->next;
      cout<<"Deleted element is : "<<temp->data<<endl;
    }
}
void Stack::Display()
{
   Stack *traverse=NULL;
   if(next==NULL)
     cout<<"\nStack is empty...\n\n";
   else
   {
     traverse=next;
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
    Stack A;
    cout<<"This program Creates a stack and performs various operations on it...\n";
    while(1)
    {
      cout<<"Enter \n1.Push onto stack\n2.Pop from stack\n3.Display the stack : ";
      cin>>choice;
      switch(choice)
      {
        case 1:
               cout<<"Enter the element to push onto stack : ";
               cin>>no;
               A.Push(no); 
               cout<<endl;
               break;
        case 2:
               A.Pop();
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