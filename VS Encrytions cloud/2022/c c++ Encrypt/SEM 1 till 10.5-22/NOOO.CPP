#include<stdio.h>
#include<conio.h>
void main()
{
int r,s,a=9753;
clrscr();
while (a>0)
{
 r=a%100;
 s=s*10+r;
 a=a/10;
 }
printf("%d",s);
getch();
}