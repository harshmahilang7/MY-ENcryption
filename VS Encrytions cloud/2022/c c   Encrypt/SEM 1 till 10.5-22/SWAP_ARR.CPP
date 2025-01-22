#include<stdio.h>
#include<conio.h>
void main()
{ int a[10],b[10],i,j;clrscr();
for(i=0;i<=9;i++)
 {
 printf("enter the value a[%d]",i);
 scanf("%d",&a[i]);
 }

 for (i=0;i<=9;i++)
 {   }

 for (j=9;j>=0;j--,i++)
 { b[j]=a[i];
 printf("%d",a[i]);
 }


for(i=0;i<=9;i++)
 {
 printf("the value of b[%d]=%d\n ",i,b[j]);
 }
 getch();
 }

