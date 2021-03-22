#include<iostream>
using namespace std;
class node
{
  public:
        int x;
        node *next;
        void Display(node* );
};
void node::Display(node *root)
{
    node *temp=root;
    while(temp!=NULL)
    {
       cout<<temp->x<<"   ";
       temp=temp->next;
    }
}
int main()
{
    node *root=NULL,*temp=NULL;
    temp=new node;
    temp->x=1;
    temp->next=NULL;
    root=temp;
    temp=new node;
    temp->x=2;
    temp->next=NULL;
    root->next=temp;
    root->Display(root);
    return 0;
}