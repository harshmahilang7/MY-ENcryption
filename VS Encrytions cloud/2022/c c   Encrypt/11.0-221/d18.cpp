/**
 * @Author: Dastan Alam
 * @Date:   03-05-2022  Tue 06:16:08 PM  18:05:78
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 12-06-2022  Sun 10:54:53 AM  10:54:53
 */
#include <iostream>
using namespace std;
int main()
{
    char n[6]={"abcde"};
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<n[i];
            // cout<<endl;
        }
        cout<<endl;
        n[i]++;
    }
    return 0;
}
//output----
/*
A
BB
CCC
DDDD
EEEEE
*/