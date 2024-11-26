/**
 * @Author: DASTAN_ALAM
 * @Date:   19-06-2022  Sun 05:17:22 PM  17:17:22
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 19-06-2022  Sun 07:34:55 PM  19:34:55
 */
#include <iostream>

using namespace std;


int main()
{
    char z[10]={"ABCDEFG"};
    cout<<z<<endl;
    for(int i=1;i<=3;i++)
    {
        for(int l=0;l<=4-i;l++)
        {
            cout<<z[l];
        }
        for (int k=1; k <=2*i-1; k++)
        {
           cout<<" ";
        }
        for(int l=2+i;l<=9;l++)
        {
            cout<<z[l];
        }
    cout<<endl;
    }
    return 0;
}
