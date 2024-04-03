#include<iostream>
using namespace std;
class node
{
  public : int data;
          Node*next;
  Node()
  {
      data=0;
       next=NULL;
  }
  Node(int data)
  {
    this->data=data;
    this->next=NULL;
  }
};
class Linkedlist
{
   Node*head;
   public: 
   Linkedlist()
   {
      head=NULL;
   }
void pushNode(int);
void show();
void delete(int);
};
void Linkedlist::deleteNode(int node)
{
  Node*temp=head,*temp2=NULL;
  int n=0;
  while(temp1 !=NULL)
  {
      temp1=temp1->next
