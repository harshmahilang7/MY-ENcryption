/**
 * @Author: DASTAN_ALAM
 * @Date:   11-05-2022  Wed 04:20:22 PM  16:20:22
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 11-05-2022  Wed 05:52:14 PM  17:52:14
 */
//wap to check Pythagorean triple or not..
#include <iostream>
#include <cmath>
using namespace std;

int a2b2(int);
int c2(int);

int main()
{
    int i,j,w,n;
    cout<<"ther the number";
    cin>>i;
    j=(int)(log10(i)+1);
    if (j==3)
    {
         w=a2b2(i);
         n=c2(i);
         if(w==n)
         {cout<<"yes its is Pythagorean triple ";}
         else
         {cout<<"fu*k off";}
    }
    else
    {cout<< "you can enter only 3 digit number \n Fucking kiding me";}  
}

int a2b2(int j)
{
    int a=j,l=0,m=0,w=0;
    int q=a/10;
    while(q>0)
    {
        l=q%10;
        q=q/10;
        m=pow(l,2);
        w+=m; 
    }
    cout<<"the a^2+b^2="<<w<<endl;
    return w;
}

int c2(int z)
{
    int j,k=0,n=0;
    j=((int)(log10(z)+1)-((int)(log10(z)+1)-1));
    while(z>j)
    {
        k=z%10;
        z=1;
        n=pow(k,2);
    }
    cout<<"the c^2 is ="<<n<<endl;
    return n;
}
