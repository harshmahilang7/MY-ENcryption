#include<stdio.h>
#include<conio.h>

// Comparison Of two No.s
void main()
{
 clrscr();
 int a,b;
 printf("Enter the two no.s");
 scanf("%d%d",&a,&b);
 if(a>b)
  {
   printf("\na is greater than b");
  }
 else
 {
  if(a==b)
   {
    printf("\nThey both are equal");
   }
  else
   {
    printf("\nb is greater than a");
   }

 }

 getch();
}