/**
 * @Author: DASTAN_ALAM
 * @Date:   06-05-2022  Fri 01:20:37 PM  13:20:37
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 06-05-2022  Fri 01:30:25 PM  13:30:25
 */
// wap to desplay all factors of the given number 
#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter the number";
    cin>>n;
    cout<<"the factors of "<<n<<" are"<<endl;
    for(int i=1;i<=n;i++)
    {k=0;
        if(n%i==0)
        {k++;}
    if(k)
    cout<<i<<" ";
    }
    return 0;
}
