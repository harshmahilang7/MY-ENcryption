/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:18 PM       22:05:18
 */
#include<iostream>
#include <conio.h>
using namespace std;

// Circular Linked List..

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

void insert(int ele)
{
  Node *New_node = new Node();
  New_node->data=ele;
  if(head == NULL)
  {
    New_node->next=New_node;
    head=New_node;
  }
  else
  {
    Node *temp = head;
    while (temp->next!=head)
    {
      temp=temp->next;
    }
    temp->next=New_node;
    New_node->next = head;
  }
}

void display()
{
  Node *p = head;
  if (p != NULL)
  {
    cout << "The list contains: \n";
    do
    {
      cout << p->data << " ";
      p = p->next;
    }while (p != head);
  }
  else
  {
    cout << "The list is empty.\n";
  }
}

int main()
{
  int ele,cv;
  insert(12);
  insert(43);
  insert(21);
  insert(34);
  display();
}