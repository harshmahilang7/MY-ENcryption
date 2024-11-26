#include<stdio.h>
#include<conio.h>
void main()
{
int a,a1,s=0,r;
a=a1;
clrscr();
printf("enter the value a: ");
scanf("%d",&a);

while (a>0)
   {
   r=a%10;
   s=s*10+r;
   a=a/10;
   }
printf("%d\n",s);
if(s==a1)
   {
   printf("the given no is palindrome.");
   }
else
   {
   printf("the given no not is palindrome.");
   }
getch();
}