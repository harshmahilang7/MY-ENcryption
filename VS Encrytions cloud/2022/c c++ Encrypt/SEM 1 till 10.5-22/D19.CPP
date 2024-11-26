#include<stdio.h>
#include<conio.h>
void main()
{
 int a=21,b=10,c=10;
 clrscr();
 printf("Checking c==b\n");
 if(c==b)
  {
   printf("c is equal to b\n");
  }
 else
  {
   printf("c is not equal to b\n");
  }

 //-------------------------------------------------------------------------

 printf("\nChecking a<b\n");
 if(a<b)
  {
   printf("a is less than b\n");

  }
 else
  {
   printf("b is less than a");

  }

 getch();
}