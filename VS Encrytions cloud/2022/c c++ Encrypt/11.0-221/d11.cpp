/**
 * @Author: Dastan Alam
 * @Date:   25-04-2022  Mon 09:07:54 AM  09:04:13
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 14-06-2022  Tue 07:51:54 AM  07:51:54
 */
#include <iostream>

using namespace std;


int main()
{
    int i,j,k;
    char A[10]="MALAYALAM";
    
    for(i=4;i>=1;i--)
    {
        for(j=0;j<=4-i;j++)
        {cout<<A[j];}
        for(k=i;k<=2*i-1;k++)
        {cout<<" ";}
        for(k=0;k<i-1;k++)
        {cout<<" ";}
        for(j=4+i;j<=9;j++)
        {cout<<A[j];}
    
    cout<<endl;
    }
    cout<<A;
    return 0;
}
