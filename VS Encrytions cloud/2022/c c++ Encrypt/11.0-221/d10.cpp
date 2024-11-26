/**
 * @Author: Dastan Alam
 * @Date:   24-04-2022  Sun 08:01:16 PM  20:04:19
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 25-04-2022  Mon 02:31:23 PM  14:04:35
 */
#include <iostream>

using namespace std;

int main()
{
    int n,cont=0;
    cout<<"enter the length =";
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++)
        {cin>>h[i];}
    
while(cont<n-1)
     {
         for (int i=0;i<n-cont-1;i++)
         { if(h[i]>h[i+1])
            {   
                int temp=h[i];              
                h[i]=h[i+1];
                h[i+1]=temp;
            }
         }
         cont++;
     }
     
    for(int i=0;i<n;i++)
    {
        cout<<h[i]<<" ";
    }
    return 0;
}
/*
void bubbleSort(int arr[])
{
    int i, j, temp;
    for(i=0; i<9; i++)
    {
        for(j=0; j<(10-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
};
int main()
{
    int i, arr[10];
    cout<<"Enter 10 Elements: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    bubbleSort(arr);
    cout<<"\nThe New Sorted Array is: \n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}*/
