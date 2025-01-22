/**
 * @Author: Dastan Alam
 * @Date:   03-05-2022  Tue 06:25:55 PM  18:05:28
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 03-05-2022  Tue 06:32:19 PM  18:05:26
 */
#include <iostream>

using namespace std;


int main()
{
    for(int i=0;i<=4;i++)
    {
        for (int j=3;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//output;
/*

   *
  ***
 *****
*******

*/
