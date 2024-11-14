/**
 * @Author: Dastan Alam
 * @Date:   02-04-2022  10:42:40 AM  10:04:15
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 02-04-2022  10:52:35 AM  10:04:18
 */
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{   long int sal,two,egh,n;
 clrscr();
cout<<"entr the salary of employee : ";
cin>>sal;

two=(sal-sal*2/100);
n=(sal+sal*2/100) ;
egh=(sal+sal*8/100);
/*cout<<two;
cout<<egh;*/

if(sal>50000)
{ cout<<"the salary is = " <<two; }

else if(sal<30000)
{ cout<<" the salary is = " <<n; }

else
{ cout<<" the salary is = " <<egh;  }

getch();
}