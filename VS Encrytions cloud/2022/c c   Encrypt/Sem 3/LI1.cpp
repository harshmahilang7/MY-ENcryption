/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:12 PM       22:05:12
 */
// Program to add and search linked list

#include <iostream>
#include <conio.h>
using namespace std;65


struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

// Linked list insertion
void insert(int ele)
{
  Node *New_node = new Node();
  New_node->data = ele;
  if (head == NULL)
    head = New_node;
  else
  {
    Node *temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = New_node;
  }
}

// Printing 
void display()
{
  Node *temp = head;
  if (temp != NULL)
  {
    cout << "The list contains: ";
    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
  }
  else
  {
    cout << "The list is empty.\n";
  }
}

// Deletion operation in Linked list
void del(int ele)
{
  Node *temp = head;
  Node *pre = NULL;

  if (temp->data == ele)
  {
    head = head->next;
  }
  else
  {
    while (temp->next->data != ele)
    {
      temp = temp->next;
    }
    pre = temp->next;
    temp->next = temp->next->next;
    delete pre;
  }
}

int main()
{
  int ele, cv;
  insert(12);
  insert(43);
  insert(21);
  insert(34);
  display();

  cout << "\nEnter element which you want to delete : ";
  cin >> cv;
  del(cv);
  display();
}