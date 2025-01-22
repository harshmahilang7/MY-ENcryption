/**
 * @Author: Dastan Alam
 * @Date:   02-04-2022  10:42:39 AM  10:04:00
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 02-04-2022  10:52:45 AM  10:04:97
 */
// the sum of given number ?
#include<iostream.h>
#include<constream.h>
#include<stdio.h>
void main()
{
int q,w,e,r=0;                                     //55=5+5=10
clrscr();
cout<<"enter the number;";
cin>>q;
while (q>0)
{
   w=q%10;
   r=r+w;
   q=q/10;

}
cout<<r;
getch();

}