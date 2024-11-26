/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:36 PM       22:05:36
 */
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *top =NULL;

void push(int val)
{
    Node *new_node = new Node();
    new_node->data = val;
    new_node->next = top;
    top = new_node;
}

void pop()
{
    if(top == NULL)
        cout<<"\nStack underflow..";
    else
    {
        cout<<"\nElement "<<top->data<<" popped..";
        top=top->next;
    }
}

void display()
{
    Node *temp = top;
    if(top == NULL)
        cout<<"\nStack empty.. ";
    else 
    {
        cout<<" Stack contains : ";
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

int main()
{
    push(12);
    push(35);
    push(45);
    push(23);
    push(56);
    display();
    pop();
    display();
}