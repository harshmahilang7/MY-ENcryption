/**
 * @Author: Dastan_Alam
 * @Date:   19-09-2022 06:52:17 PM       18:52:17
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 08-10-2022 09:32:31 PM       21:32:31
 */
#include <iostream>

using namespace std;

struct node
{
    node *left;
    int data; 
    node *right;
    
};
node *head=NULL;
void insert(int new_data)
{
    node *new_nod = new node();
    new_nod->data = new_data;
    new_nod->left=NULL;
    new_nod->right=NULL;
    node * temp=head;
    if(head==NULL)
    head=new_nod;
    else
    {
        while (temp->right!=NULL)
        {
            temp=temp->right;
        }
        temp->right=new_nod;
        new_nod->left=temp;
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
            temp=temp->right;
        }
    }
    else
    {
        cout<<"Empty..";
    }
}

int main()
{
insert(1);   
insert(2);   
insert(3); 
insert(15);  
display();
}

