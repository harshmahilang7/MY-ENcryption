#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,fact=1;
clrscr();
printf("program to calculate factorial of given number:");
printf("\n enter any integer number:");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
fact=fact*i;
}
printf("\n the factorial of %d is=%d",n,fact);
getch();
return 0;
}
