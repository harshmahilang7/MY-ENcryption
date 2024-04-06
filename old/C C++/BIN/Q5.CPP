/**
 * @Author: Dastan Alam
 * @Date:   02-04-2022  10:42:40 AM  10:04:15
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 02-04-2022  10:52:38 AM  10:04:38
 */
// wap to find out sum of digits of given number?
#include<iostream.h>
#include<constream.h>
void main()
{long int d,E,e=0,p;
clrscr();
cout<<"enter the number:";
cin>>d;
cout<<endl;
E=d;
while (d>0)
{
p=d%10;
e=e+p;
d=d/10;
}
cout<<"the number is "<<E <<" the sum is :"<<e;
getch();
}
//cout<<a<<endl<<b;