#include<stdio.h>
#include<conio.h>

// To check Positive Or Negative
void main()
{
 clrscr();
 int a;
 printf("Enter the  value=");
 scanf("%d",&a);
 if(a>0)
  {
   printf("\nGiven no. is positive");
  }
 else
  { if(a==0)
     {
      printf("\nIt is neither positive nor negative");
     }
    else
     {
      printf("\nGiven no. is negative");
     }
  }

 getch();
}