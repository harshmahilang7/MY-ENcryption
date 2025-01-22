#include<stdio.h>
#include<conio.h>
#include<math.h>

// Armstrong No.
void main()
{
 int x1,x2,s,a,r;
 clrscr();
 printf("Enter the range\n");
 printf("Enter the value(min)=");
 scanf("%d",&x1);
 printf("Enter the value(max)=");
 scanf("%d",&x2);
 for(int n=x1;n<=x2;n++)
  {
   a=n;
   s=0;
   while(a>0)
    {
     r=a%10;
     s=s+pow(r,3);
     a=a/10;
    }
   if(n==s)
    {
     printf("%d ",n);
    }
  }
 getch();
}