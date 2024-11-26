/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:28 PM       22:05:28
 */
// Wrong code..

#include <iostream>
using namespace std;
#define max 10

int queue[max], n = 10, front = -1, rear = -1;

void traverse(int rear)
{
    for (int i = rear + 1; i > 0; i--)
    {
        queue[i] = queue[i - 1];
    }
}

void Insert(int ele)
{
    if (rear == n - 1)
        cout << "Stack overflow.. \n";
    else
    {
        if (front == -1)
            front = 0;

        traverse(rear);
        rear++;
        queue[0] = ele;
    }
}

void Delete()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Empty ";
        return;
    }
    else
    {
        cout << "Element deleted from queue is : " << queue[n-front] << endl;
        cout<<"\nThe elemets are : ";
        for(int i = front ; i<rear ; i++)
            cout << queue[i] << " ";
        cout<<endl;
    }
}

void Display()
{
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
    {
        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main()
{
    Insert(23);
    Insert(34);
    Insert(45);
    Insert(56);
    Insert(35);
    Insert(22);
    Insert(76);
    Insert(26);
    Insert(54);
    Display();
    Delete();
    Display();
}