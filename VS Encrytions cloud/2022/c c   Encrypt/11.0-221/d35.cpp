/**
 * @Author: DASTAN_ALAM
 * @Date:   11-05-2022  Wed 05:18:14 PM  17:18:14
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 15-05-2022  Sun 09:23:01 AM  09:23:01
 */
#include <iostream>
using namespace std;
int main()
{
    for(int i=3;i>=1;i--)
    {
        for(int j=1;j<=9;j++)
        {
            if(((i+j)%4==0)||(i==2&&j%4==0))
            {cout<<"* ";}
            else
            {cout<<"  ";}
        }cout<<endl;
    }
    cout<<endl;
    return 0;
}
/*
output --
*       *       * 
  *   *   *   *   
    *       *    
*/