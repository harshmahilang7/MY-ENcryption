/**
 * @Author: Dastan Alam
 * @Date:   25-04-2022  Mon 10:31:50 AM  10:04:06
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 26-04-2022  Tue 01:57:45 PM  13:04:27
 */
#include <iostream>

using namespace std;

int main()
{
    int i,k;
    for(i=1;i<=100;i++)
    { k=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
            break;}
            
        }
    } 
    cout<<k;   
    return 0;
}