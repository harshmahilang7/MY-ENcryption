/**
 * @Author: Dastan_Alam
 * @Date:   10-08-2022 08:24:03 PM       20:24:03
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 10-08-2022 08:37:23 PM       20:37:23
 */
#include<iostream>
using namespace std;

void func()
{
 int j;
 for(int i=0;i<4;i++)
 {
     for (int j = 0; j < 4-i; j++)
     {
         cout<<char('A'+j)<<" ";
     }
     for(j=0;j<i*2-1;j++)
     {
         cout<<"  ";
     }
     cout<<endl;
 }
}

int main()
{
    int i;
    char ch='A';
    // cout<<char(ch+2);
    func();
}
