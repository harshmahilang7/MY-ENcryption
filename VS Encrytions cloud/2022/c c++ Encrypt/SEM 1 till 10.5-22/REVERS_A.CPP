#include<stdio.h>
#include<conio.h>
void main()
{ int a[5],b[5],i;clrscr();
for(i=0;i<=4;i++)
 {
 printf("enter the value a[%d]",i);
 scanf("%d",&a[i]);
 }
 b[0]=a[4];
 b[1]=a[3];
 b[2]=a[2];
 b[3]=a[1];
 b[4]=a[0];

for(i=0;i<=4;i++)
 {
 printf("the value of a[%d]=%d\n ",i,b[i]);
 }
 getch();}


