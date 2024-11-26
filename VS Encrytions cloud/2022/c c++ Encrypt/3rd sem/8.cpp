/**
 * @Author: Dastan_Alam
 * @Date:   14-09-2022 08:53:21 PM       20:53:21
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 14-09-2022 08:54:46 PM       20:54:46
 */
#include<iostream.>
#include<conio.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class Linked_insert{
    Node* head;
    public:
        Linked_insert()
        {
            head = '\0';
        }
 void Insert_link(int new_element){
            Node* new_Node;
            new_Node -> data = new_element;
            new_Node -> next = '\0';
            if(head=='\0')
                new_Node -> next = head;
            else 
                while(head!='\0')
                {
                    new_Node = new_Node -> next;
                }
            new_Node -> next = Node;
        }
        void print()
        {
            Node* next;
            while (next!='\0')
            {
                cout<<new_Node ->next;
                next = next + 1;
            }
        }
};

void main()
{
    Linked_insert li;
    li.Insert_link(10);
    li.Insert_link(20);
    li.Insert_link(30);
    li.Insert_link(40);
    li.Insert_link(50);
    li.print();
}