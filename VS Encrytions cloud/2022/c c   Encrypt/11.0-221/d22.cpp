/**
 * @Author: DASTAN_ALAM
 * @Date:   05-05-2022  Thu 05:08:39 PM  17:08:39
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 06-05-2022  Fri 03:22:59 PM  15:22:59
 */
#include <iostream>
#include<math.h>

using namespace std;

//*char ones[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"
//              ,"eleven","twelve","thirteen","forteen","fiveteen","sixteen","seventeen","eighteen",
//              "nineteen","twenty"};

              

int main()
{
    int n,t=0,s=0,a;
    cout<<"enter the number";
    cin>>n;
    t=(int)(log10(n)+1); 
    for(int i=0;i<=t;i++)
    {
        a=n%10;
        n=n/10;
        cout<<a;
        
    }
    return 0;
}
