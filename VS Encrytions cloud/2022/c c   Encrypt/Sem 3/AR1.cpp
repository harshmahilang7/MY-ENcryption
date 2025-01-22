/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:54 PM       22:05:54
 */
#include <iostream>
#include <conio.h>
using namespace std;

// Insertion and deletion in array
#define max 10

void insert(int arr[],int pos,int ele)
{
    for (int i = max; i >=pos; i--)
    {
        if(i==pos)
        {
            arr[i]=ele;
            break;
        }
        arr[i]=arr[i-1];
    }
}

void del(int arr[],int pos)
{
    for (int i = pos; i < max; i++)
    {
        arr[i]=arr[i+1];
    }
}

void print(int arr[])
{
    for(int i=0;i<max;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[max],val,pos;

    // Array insertion
    cout<<"Enter the values into array : ";
    for(int i=0;i<max;i++)
        cin>>arr[i];

    // Array print
    cout<<"Array : ";
    print(arr);

    // Array insetion at a point
    cout<<"\nEnter positon and value to insert in array respectively : ";
    cin>>pos>>val;
    insert(arr,pos-1,val);
    cout<<"\nUpdated Array : ";
    print(arr);

    // Deletion of a single value 
    cout<<"\nEnter positon to delete value : ";
    cin>>pos;
    del(arr,pos-1);
    cout<<"\nUpdated Array : ";
    print(arr);
}