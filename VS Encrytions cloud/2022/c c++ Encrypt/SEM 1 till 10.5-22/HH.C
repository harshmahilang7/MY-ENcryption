/**
 * @Author: Dastan_Alam
 * @Date:   14-09-2022 07:30:51 PM       19:30:51
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 02-11-2022 09:27:24 PM       21:27:24
 */
#include<stdio.h>
#include<conio.h>
int main()
{
unsigned long int a=0,b=1,n,i,temp;
//clrscr();
 printf("**\n\n find the fibonacci series in between 0 to 24 rang \n\n**");
  scanf("%ld",&n);
 printf("the first %ld element of fibonacci series ",n);
 printf("\n%ld\n%ld",a,b);
 for(i=3;i<=n;i++)
 {
 temp=a+b;
 printf("\n%ld",temp);
 a=b;
 b=temp;
    }
 //getch();
 //return 0;
     }
