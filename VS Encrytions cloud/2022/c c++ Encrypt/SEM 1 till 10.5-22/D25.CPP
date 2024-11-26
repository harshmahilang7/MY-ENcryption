#include<stdio.h>
#include<conio.h>

//Half Pyramid
void main()
{
 clrscr();
 int i,j;
 for(i=1;i<=22;i++)
  {
    for(j=1;j<=i;j++)
     {
      printf("*");

     }
    printf("\n");


  }
 getch();
}