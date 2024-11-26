#include<stdio.h>
#include<conio.h>

// Fabonicci Series
void main()
{
 clrscr();
 int a=0,b=1,c,n;
 printf("Enter the no. to Print fabonicci series uptp=");
 scanf("%d",&n);
 for(int i=1;i<n;i++)
 {
  c=a+b;
  printf("\n%d",c);
  a=b;
  b=c;
 }


 getch();
}