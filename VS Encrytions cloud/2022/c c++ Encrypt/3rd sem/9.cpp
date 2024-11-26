/**
 * @Author: Dastan_Alam
 * @Date:   15-09-2022 08:29:32 PM       20:29:32
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 15-09-2022 08:37:54 PM       20:37:54
 */
#include <iostream>
#include <conio.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Linked_insert
{
    Node* head;

public:
    Linked_insert()
    {
        head = NULL;
    }

    void Insert_link(int new_element)
    {
        Node* new_Node = new Node();
        new_Node->data = new_element;
        new_Node->next = NULL;
        Node* cur = head;
        if (new_Node->next == NULL)
            new_Node=head;
        else
            while (cur->next != NULL)
            {
                head = new_Node;
            }
        cur->next = new_Node;
    }
    void print()
    {
        Node* node = head;
        while (node != NULL)
        {
            
            cout << node->data << " ";
            node = node->next;
        }
    }
};

int main()
{
    Linked_insert li;
    li.Insert_link(10);
    li.Insert_link(20);
    li.Insert_link(30);
    li.print();
    getch();
}
