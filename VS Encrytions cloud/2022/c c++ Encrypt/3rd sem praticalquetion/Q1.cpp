/**
 * @Author: Dastan_Alam
 * @Date:   28-10-2022 04:09:06 PM       16:09:06
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 03-11-2022 06:39:43 PM       18:39:43
 */

//1. Write a program to perform insertion and deletion operation in an array.

#include <iostream>

using namespace std;

int a[10] = {1,2,3,4,5,6,7,8,9,0};
int pos, ele, i;

int incer()
{
    cout<<"Enter position and element respectively : ";
    cin>>pos>>ele;
    if (pos>=0 && pos<10)
    {
        for(i=10-1;i>=pos-1;i--)
        {
            if(i==pos)
            {
            a[pos]=ele;
                
            }
        }
            a[i]=a[i-1];
        for(i=0;i<10;i++)
        {
            cout<<" "<<a[i];
        }
    }
    else 
        cout<<"Invalid position..";
return 0;
}
int dele()
{
    cout<<"Enter element to delete : ";
    cin>>ele;
    
    for(i=0;i<10;i++)
    {
        if (a[i]==ele)
        {
            pos=i;
        }
    }
    if (pos!=i)
    {
        for(i=pos;i<10;i++)
        {
            a[i]=a[i+1];
        }
        for(i=0;i<10;i++)
        {
            cout<<" "<<a[i];
        }
    }
  return 0;
}

int main()
{
    int a;
    for (int i = 0; i < 10; i++)
    {
    cout<<::a[i]<<",";
    }
    cout<<endl;
    cout<<"what you want to do \n1.insertion \n2.deletion\n" ;
    cin>>a;
    if (a==1)
    {
        incer();
    }
    else if (a==2)
    {
        dele();
    }
    else
    {
        cout<<"invalid input\n try again\n";
        main();
    }   
    return 0;
}
