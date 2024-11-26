#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter the height=");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
  {
   for(int j=1;j<=n-i;j++)
    {
     printf("*");
    }
   for(int k=1;k<=(2*i);k++)
    {
     printf(" ");
    }
   for(j=1;j<=n-i;j++)
    {
     printf("*");
    }
   printf("\n");

  }
 getch();
}