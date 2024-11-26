/**
 * @Author: DASTAN_ALAM
 * @Date:   11-05-2022  Wed 04:20:22 PM  16:20:22
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 11-05-2022  Wed 05:17:53 PM  17:17:53
 */
#include <iostream>
#include <cmath>
using namespace std;
int a2b2(int);
int c2(int);
int main()
{
    int i,j,k=0,n=0,m=0,q=0,w=0,l=0;
    cout<<"ther the number";
    cin>>i;
    j=((int)(log10(i)+1)-((int)(log10(i)+1)-1));
    
    int a=i;
    q=a/10;
    while(q>0)
    {
        l=q%10;
        q=q/10;
        m=pow(l,2);
        w+=m;
        
    }
    cout<<"the a^2+b^2="<<w<<endl;
    while(i>j)
    {
        k=i%10;
        i=1;
        n=pow(k,2);
    }
    cout<<"the c^2 is ="<<n<<endl;
    if(w==n)
    {cout<<"yes its is Pythagorean triple ";}
    else
    {cout<<"fu*k off";}
    return 0;
}
int a2b2(int )