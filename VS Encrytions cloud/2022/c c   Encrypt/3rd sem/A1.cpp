/**
 * @Author: Dastan_Alam
 * @Date:   19-10-2022 09:28:33 AM       09:28:33
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 19-10-2022 09:42:59 AM       09:42:59
 */
#include <iostream>
using namespace std;

void print(int arr[],int s)
{
    cout<<"Array : ";
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void ins(int arr[],int s,int val,int pos)
{
    for (int i = s; i > 0; i--)
    {
        if (arr[i]==val)
        {
            arr[i]=arr[i-1];
            if(i==pos)
            {
                arr[i]=val;
                break;
            }
        }        
    }
}


void del(int arr[],int s,int val)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i]==val)
        {
            arr[i]=arr[i+1];
        }        
    }
}

int main()
{
    int size=10,val,pos;
    int a[size];
    cout<<"Enter array : ";
    for(int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    print(a,size);
    
    cout<<"\nEnter value to delete : ";
    cin>>val;
    del(a,size,val);
    
    cout<<"\nEnter position & value to insert : ";
    cin>>pos>>val;
    
}