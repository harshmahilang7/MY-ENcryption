/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:04:36 PM       22:04:36
 */
#include <iostream>
#include <conio.h>
using namespace std;
#define max 10

void update(int arr[],int pos,int ele)
{
    arr[pos]=ele;
}

void search(int arr[],int val)
{
    int counter=0;
    for (int i = 0; i < max; i++)
    {
        counter++;
        if (arr[i]==val)
            break;
    }
    cout<<"Element found at "<<counter<<" postion ";
}

void bubbleSort(int arr[])
{
    int n=max;
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void print(int arr[])
{
    for (int i = 0; i < max; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[max]={9,4,2,65,6,5,6,23,3,22};
    int pos,val;

    // cout<<"\nArray : ";
    // print(arr);
    // cout<<"\nEnter element and position respectively to update : ";
    // cin>>val>>pos;
    // update(arr,pos-1,val);

    // cout<<"\nUpdated Array : ";
    // print(arr);
    // cout<<"\nEnter element to search : ";
    // cin>>val;
    // search(arr,val);

    cout<<"\nArray Before shorting : ";
    print(arr);
    bubbleSort(arr);
    cout<<"\nArray After shorting : ";
    print(arr);
}