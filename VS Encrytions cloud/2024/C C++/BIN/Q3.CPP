/**
 * @Author: Dastan Alam
 * @Date:   02-04-2022  10:42:40 AM  10:04:15
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 02-04-2022  10:52:43 AM  10:04:88
 */
//find armstrong number with math.h?
#include<iostream.h>
#include<constream.h>
#include<stdio.h>
#include<math.h>
void main()
{
long int q,w,e=0,r,t;
clrscr();
cout<<"enter the number;";
cin>>q;
r=q;
t=(int)(log10(q)+1);  // cout the lenth of run time q
while(q>0)
{
   w=q%10;
   //e=e+w*w*w; only find armstrong number between 100 to 999 only in 3 digit;
   e=e+pow(w,t);
   q=q/10;
}
if (e==r)
{cout<<"armstrong number";}
else
{cout<<"not armstrong number";}
getch();}
