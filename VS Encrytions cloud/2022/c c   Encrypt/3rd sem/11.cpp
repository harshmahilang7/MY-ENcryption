/**
 * @Author: Dastan_Alam
 * @Date:   20-09-2022 05:42:34 PM       17:42:34
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 20-09-2022 06:02:12 PM       18:02:12
 */
#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};
node *head=NULL;
void insert(int new_data)
{
    node *new_node=new node();
    new_node->data=new_data;
    new_node->next=NULL;
    node *temp=head;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        while(temp->next!=NULL)
        {
        temp=temp->next;
        }
        temp->next=new_node;
    }
}
void dis()
{
    node *temp=head;
    if(temp==NULL)
    {
        cout<<"empty";
    }
    else
    {
        while (temp!=NULL)
        {
        cout<<temp->data<<" ";
        temp=temp->next;
        }
    }
}

   

int main()
{
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    dis();
    return 0;
}
