/**
 * @Author: Dastan Alam
 * @Date:   27-03-2022  03:48:47 PM  15:03:64
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 30-03-2022  06:55:30 PM  18:03:11
 */
//WAP find the  armstrong number...
#include<iostream.h>
#include<constream.h>
#include<math.h>
void main()
{
int d,a,s,t,n;
clrscr();
a=0;
cout<<"enter the number = ";
cin>>d;
t=d;
n=(int)(log10(d)+1);
while(d>0)
    {
    s=d%10;
    //a=a+(s*s*s);
    a=a+pow(s,n);
    d=d/10;
    }
if(a==t)
{cout<<"armstrong number";   }
else
{cout<<"not armstrong number"; }
getch();
}
