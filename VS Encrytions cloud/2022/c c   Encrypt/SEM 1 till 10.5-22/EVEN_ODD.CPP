#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter any numbers:");
scanf("%d",&a);
if(a%2==0)
{
printf("the number is even %d",a);
}
else
{
printf("the entered no. is odd %d",a);
}
getch();
}
