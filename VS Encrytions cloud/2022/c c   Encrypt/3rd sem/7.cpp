/**
 * @Author: Dastan_Alam
 * @Date:   14-09-2022 07:39:31 PM       19:39:31
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 15-09-2022 08:10:40 PM       20:10:40
 */
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *Next;
};
class LinkInsert
{
private:
    Node *head;

public:
    LinkInsert()
    {
        head = NULL;
    }
    void Insertlast(int newelement)
    {
        Node *NewNode = NewNode;
        NewNode->data = newelement;
        NewNode->Next = NULL;
        if (head == NULL)
        {
            NewNode->Next = head;
        }
        else
        {
            while (head != NULL)
            {
                NewNode = NewNode->Next;
            }
            NewNode->Next = Node;
        }
    }
    void paint()
    {
        Node *Next;
        while (Next != NULL)
        {
            cout << NewNode->Next;
            Next = Next + 1;
        }
    }
};
int main()
{
    LinkInsert li;
    li.Insertlast(10);
    li.Insertlast(20);
    li.Insertlast(30);
    li.paint();
    return 0;
}
