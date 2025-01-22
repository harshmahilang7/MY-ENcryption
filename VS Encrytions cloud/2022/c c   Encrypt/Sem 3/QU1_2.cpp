/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:25 PM       22:05:25
 */
#include <iostream>
using namespace std;
#define max 10

int queue[max], n = 10, front = -1, rear = -1;

void Insert(int ele)
{
    if (rear == n - 1)
        cout << "Stack overflow.. \n";
    else
    {
        if (front == -1)
            front = 0;
        else if(front > 0)
            front--;
        rear++;
        queue[rear] = ele;
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
        cout << "Element deleted from queue is : " << queue[front] << endl;
        front++;
    }
}

void Display()
{
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
    {
        cout << "Queue elements are : ";
        for (int i = rear; i >=front; i--)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main()
{
    Insert(34);
    Insert(45);
    Insert(56);
    Insert(35);
    Insert(22);
    Insert(76);
    Insert(26);
    Insert(34);
    Insert(56);
    Insert(54);
    Display();
    Delete();
    Display();
}