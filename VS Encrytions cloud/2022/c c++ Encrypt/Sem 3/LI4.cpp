/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:20 PM       22:05:20
 */
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class NODE
{
    int base;
    int expo;
    NODE *next;

public:
    NODE *head = NULL;
    void insert(int val, int exp)
    {
        NODE *new_node = new NODE();
        new_node->base = val;
        new_node->expo = exp;
        NODE *temp = head;
        if (temp->next == NULL)
            head = new_node;
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new_node;
        }
    }
    void display()
    {
        NODE *temp = head;
        if(head != NULL)
        {
            cout<<"The List contains : ";
            while(temp != NULL)
            {
                cout<<temp->base<<"^"<<temp->expo<<" ";
                temp=temp->next;
            }
        }
        else
            cout<<"Empty linked list.. ";
    }
};

int main()
{
    NODE h1,h2;
    h1.insert(12,2);
    h1.insert(75,3);
    h1.insert(23,4);
    h1.insert(34,5);

    h2.insert(12,2);
    h2.insert(75,3);
    h2.insert(23,4);
    h2.insert(34,5);
    
    h2.display();
}