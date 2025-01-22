#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,k;
clrscr();
for (i=1;i<=5;i++)
{for (j=1;j<=5;j++)
 {for(k=1;k<=i;k++)
   {if(j==1|j==5)
   printf("x");
   else
   printf(" ");
   }
/*    for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
	 printf("* ");
      }
      printf("\n");   */
 }
printf("\n");
  }
getch();
}