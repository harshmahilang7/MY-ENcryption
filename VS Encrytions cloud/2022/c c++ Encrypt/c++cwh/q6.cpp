/**
 * @Author: DASTAN_ALAM
 * @Date:   21-06-2022  Tue 06:56:29 PM  18:56:29
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 21-06-2022  Tue 08:10:52 PM  20:10:52
 */
#include <iostream>

using namespace std;


int main()
{ 
    int n,a=0,k=0;
    cin>>n;
    while(n!=0)
    {
      
      a=n%8;
      k=a+a;
      n=n/8;
      cout<<a<<endl;
    }
    return 0;
}
