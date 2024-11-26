#include<stdio.h>
#include<conio.h>

// Prime no.
void main()
{
 int x1,x2,count;
 clrscr();
 printf("Enter the range\n");
 printf("Enter the value(small)=");
 scanf("%d",&x1);
 printf("Enter the value(max)=");
 scanf("%d",&x2);
 for(int n=x1;n<=x2;n++)
  {
     count=0;
     for(int i=2;i<n;i++)
      {
	if(n%i==0)
	 {
	  count++;
	 }
      }
     if(count==0)
      {
       printf("%d ",n);
      }
  }
 getch();
}