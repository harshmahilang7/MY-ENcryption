/**
 * @Author: Dastan_Alam
 * @Date:   23-09-2022 08:20:08 AM       08:20:08
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 23-09-2022 09:07:28 AM       09:07:28
 */
#include <iostream>

using namespace std;

struct node
{
    node *l;
    int data;
    node *r;
};
node *head=NULL;

// void delection(node ,int element )
//    { while (temp->r!=NULL)
//     {
//         if(new_node->data==element)
//         new_node->r=new_node->r->r;
        
//     }
//     }

// The first and last element cant't be deleted using this program..
void del(int num)
{
    node *temp=head;
    node *B1=NULL;
    node *B2=NULL;
    while (temp->r->data != num)
    {
        temp=temp->r;
    }
    B1=temp->r;
    temp->r->r->l=temp->r;
    temp->r=temp->r->r;
    delete B1;
}


void insert(int new_data)
{
    node *new_node= new node();
    new_node->l=NULL;
    new_node->data=new_data;
    new_node->r=NULL;
    node *temp=head;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        while (temp->r!=NULL)
        {
            temp=temp->r;
        }
        temp->r=new_node;
        new_node->l=temp;
        
    }
    
}
void display()
{
    node *temp=head;
    if(temp!=NULL)
    {
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->r;
        }
    }
    else
    {
        cout<<"Empty..";
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

    return 0;
}
