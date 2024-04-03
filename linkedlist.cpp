#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node(int d)
    {
      data=d;
      next=NULL;
    }
};
void insert(node*& head,int data)
{
   node* n=new node(data);
   n->next=head;
   head=n;
}
void show(node* head)
{
   while(head !=NULL)
  {
  cout<<head->data<<"->";
  head=head->next;
  }
}
int main()
{
   node* head =NULL;
  insert(head,5);
  insert(head,2);
  insert(head,1);
  insert(head,2);
  show(head);
}



