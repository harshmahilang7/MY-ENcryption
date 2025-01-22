#include<stdio.h>
#include<conio.h>
void main()      //revers
{
int a,r;
clrscr();
printf("enter the value a: ");
scanf("%d",&a);

while(a>0)
   {
   r=a%10;
   printf("%d,",r);
   a=a/10;
   }
getch();
}