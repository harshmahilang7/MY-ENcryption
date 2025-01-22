/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:33 PM       22:05:33
 */
#include <iostream>
using namespace std;
#define max 10

int stack[max], n = max, top = -1;

void push(int val)
{
    if (top > max)
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if (top <= -1)
        cout << "Stack Underflow" << endl;
    else
    {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are:";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty\n";
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