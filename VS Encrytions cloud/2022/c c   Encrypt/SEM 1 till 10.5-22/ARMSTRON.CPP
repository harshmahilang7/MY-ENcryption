/**
 * @Author: Dastan Alam
 * @Date:   2021-11-28 17:26:06
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2022-03-07 11:11:27
 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()                       //armstrog
{
int a,a1,s=0,r;
//clrscr();
printf("enter the no=");
scanf("%d",&a);
a1=a;
while(a>0)
    {
     r=a%10;
     s=s+(r*r*r);
     a=a/10;
     }
if(a1==s)
  {
  printf(" the give no is armstrong");
  }
else
  {
  printf(" the give not no is armstrong");
  }
//getch();
}