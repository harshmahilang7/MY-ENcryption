/**
 * @Author: DASTAN_ALAM
 * @Date:   11-05-2022  Wed 04:11:27 PM  16:11:27
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 11-05-2022  Wed 06:18:36 PM  18:18:36
 */
//patten 
#include <iostream>
using namespace std;
int main()
{
    int m=1;
    for(int i=0;i<=3;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
         cout<<m;
         m++;  
        }cout<<endl;  
    }
    return 0;
}
// output
// 1
// 23
// 456
// 78910