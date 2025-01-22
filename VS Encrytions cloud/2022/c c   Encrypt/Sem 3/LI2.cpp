/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:15 PM       22:05:15
 */
#include <iostream>
#include <conio.h>
using namespace std;

// Doubly linked list..
struct Node
{
    int data;
    Node *pre;
    Node *next;
};

Node *head = NULL;

void insert(int new_ele)
{
    Node *new_node = new Node();
    new_node->data = new_ele;
    new_node->next = NULL;
    new_node->pre = NULL;
    if (head == NULL)
        head = new_node;
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->pre = temp;
    }
}

void del(int num)
{
    Node *temp=head;
    Node *B1=NULL;
    Node *B2=NULL;
    while (temp->next->data != num)
    {
        temp=temp->next;
    }
    B1=temp->next;
    temp->next->next->pre=temp->next;
    temp->next=temp->next->next;
    delete B1;
}

void display()
{
    Node *temp = head;
    if (temp != NULL)
    {
        cout << "The list contains: \n";
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

int main()
{
    int num;
    insert(56);
    insert(12);
    insert(33);
    insert(45);
    insert(34);
    display();
    cout<<"\n Insert a no to delete from the linked list : ";
    cin>>num;
    del(num);
    display();
}