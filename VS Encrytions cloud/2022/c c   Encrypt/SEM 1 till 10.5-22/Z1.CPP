#include<stdio.h>
#include<conio.h>
void main()
{
 int a,x,y,b,s,r;
 clrscr();
 printf("Enter the value(small)=");
 scanf("%d",&x);
 printf("Enter the value(maximum)");
 scanf("%d",&y);
 for(b=x;b<=y;b++)
 { a=b;
   s=0;
   while(a>0)
   {
    r=a%10;
    s=s*10+r;
    a=a/10;
   }
  if(b==s)
   {
    printf("%d ,",b);
   }
 }
 getch();
}