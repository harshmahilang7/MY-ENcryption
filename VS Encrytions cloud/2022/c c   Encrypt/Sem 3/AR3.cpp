/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:04:54 PM       22:04:54
 */
#include <iostream>
#include <conio.h>
using namespace std;
#define max 10

void print(int arr[])
{
    for(int i=0;i<max;i++)
        cout<<arr[i]<<" ";
}

void main()
{
    int arr[max],val,pos;
    cout<<"Enter the values into array : ";
    for(int i=0;i<max;i++)
        cin>>arr[i];

    cout<<"Array : ";
    print(arr);
}