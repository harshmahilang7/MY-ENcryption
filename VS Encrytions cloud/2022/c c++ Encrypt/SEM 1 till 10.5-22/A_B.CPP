#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("enter any 2 numbers:");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("a is greater %d",a);
}
else
{
printf("b is greater %d",b);
}
getch();
}