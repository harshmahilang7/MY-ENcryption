#include<stdio.h>
#include<conio.h>
void main()
{
long int n;
clrscr();
printf("enter the value of n:");
scanf("%ld",&n);
if(n<0)
{
printf("number is negative");
}
printf("value of n%ld",n);
getch();
}