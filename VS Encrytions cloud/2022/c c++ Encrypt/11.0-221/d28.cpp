/**
 * @Author: DASTAN_ALAM
 * @Date:   06-05-2022  Fri 03:00:14 PM  15:00:14
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 06-05-2022  Fri 03:06:02 PM  15:06:02
 */
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=3;i++)
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
output--
    *       *     
  *   *   *   *
*       *       * 

*/