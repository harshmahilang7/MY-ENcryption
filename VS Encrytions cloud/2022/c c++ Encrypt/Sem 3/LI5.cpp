/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:22 PM       22:05:22
 */
#include <iostream>
#include <conio.h>
using namespace std;

struct Node
{
  int base;
  int expo;
  Node *next;
};

Node *head1 = NULL;

void insert(Node *ptr,int base,int expo)
{
  Node *new_node = new Node();
  new_node->base = base;
  new_node->expo = expo;
  if(ptr == NULL)
    {
      ptr=new_node; 
      cout<<"Hitt.. ";
    }
  else 
  {
    while(ptr != NULL)
      ptr=ptr->next;
    ptr->next=new_node;
  }
}

void display(Node *ptr)
{
  cout<<"The list contains : ";
  if (ptr == NULL)
    cout<<ptr->base<<"^"<<ptr->expo<<" ";
  else
  {
    Node *temp=ptr;
    while(temp!= NULL)
    {
      cout<<ptr->base<<"^"<<ptr->expo<<"  ";
      temp = temp->next;
    }
  }
}

int main()
{
  insert(head1,12,2);
  insert(head1,45,3);
  insert(head1,43,4);
  display(head1);
}