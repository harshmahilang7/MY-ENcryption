/**
 * @Author: Dastan_Alam
 * @Date:   14-09-2022 07:30:36 PM       19:30:36
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 02-11-2022 09:31:02 PM       21:31:02
 */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,s;
clrscr();


for (a=1;a<=5;a++)
     {
      for (s=a; s<=5; s++)
      {printf("  ");}
      for (s=1;s<=(2*a-1);s++)
      {    printf(" ");
	 if(a==3||s==1||s==(2*a-1))
	    {
		printf("*");
	    }
	    else
	    {
		printf(" ");
	    }

	}
	 printf("\n");
      }



  getch();
}