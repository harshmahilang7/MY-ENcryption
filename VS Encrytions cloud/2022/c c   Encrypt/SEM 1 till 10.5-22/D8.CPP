#include<stdio.h>
#include<conio.h>

// Half Pyramid
void main()
{
 clrscr();


 for(int i=0;i<24;++i)
 {
  for(int j=0;j<=i;++j)
     {
      printf("* ");

      }
  printf("\n");

 }
 getch();
}