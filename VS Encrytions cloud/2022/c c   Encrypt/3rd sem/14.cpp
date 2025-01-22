/**
 * @Author: Dastan_Alam
 * @Date:   02-11-2022 07:44:50 PM       19:44:50
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 02-11-2022 09:24:35 PM       21:24:35
 */
#include <iostream>
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




    // // Deletion of a single value 
    // cout<<"\nEnter positon to delete value : ";
    // cin>>pos;
    // del(arr,pos);
    // cout<<"\nUpdated Array : ";
    //print(arr);
}