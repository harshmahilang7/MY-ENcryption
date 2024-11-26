/**
 * @Author: Dastan_Alam
 * @Date:   28-10-2022 04:41:05 PM       16:41:05
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 28-10-2022 05:14:45 PM       17:14:45
 */
#include <iostream>
using namespace std;
//2. Write a program to perform update and searching operation in an array.
int d[] = {1,2,3,4,5};
int k , n = 5, item ,searchele;
int i, j;

int update()
{
    
    cout<<"The original array elements are :\n";

    for (i = 0; i < n; i++)
    {
        cout<<"d["<<i<<"] ="<<d[i]<<endl;
    }
    
    cout<<"Enter position and element respectively : ";
    cin>>k>>item;
    d[k - 1] = item;

    cout<<"The array elements after updation :\n";

    for (i = 0; i < n; i++)
    {
        cout<<"d["<<i<<"] ="<<d[i]<<endl;
    }
    return 0;
}
int search()
{
        cout<<"The original array elements are :\n";

        for (i = 0; i < n; i++)
        {
            cout<<"d["<<i<<"] ="<<d[i]<<endl;
        }
        cout<<"Enter element or search : ";
        cin>>searchele;  

        while (j < n)
        {
            if (d[j] == searchele)
            {
                break;
            }

            j = j + 1;
        }

        cout<<"Found element " <<searchele<< " at position "<< j + 1;
        return 0;
}

int main()
{
    int a;
    cout<<"what you want to do \n1.update \n2.search\n" ;
    cin>>a;
    if (a==1)
    {
        update();
    }
    else if (a==2)
    {
        search();
    }
    else
    {
        cout<<"invalid input\n try again\n";
        main();
    }   
        return 0;
}
