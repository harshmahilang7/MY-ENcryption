/**
 * @Author: Dastan Alam
 * @Date:   06-01-2022  04:14:06 PM  16:01:00
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 28-03-2022  11:38:16 AM  11:03:37
 */
#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],b[10],c[10],i;
//clrscr();
printf("1st arry \n");
for(i=0;i<=9;i++)
{printf("enter a[%d]=",i);scanf("%d",&a[i]);}
printf("2st arry \n");
for(i=0;i<=9;i++)
{printf("enter b[%d]=",i);scanf("%d",&b[i]); }
printf("1st arry + 2nd arrey=3rd arrey \n");
for(i=0;i<=9;i++)
{ c[i]=a[i]+b[i];
printf("%d\t+ \t%d\t=%d\n",a[i],b[i],c[i]); }
//getch();
}
