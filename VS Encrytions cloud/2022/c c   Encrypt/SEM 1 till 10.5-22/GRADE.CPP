#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter your marks:");
scanf("%d",&n);
if(n<=100 && n>=60)
{
printf("1st division n%d",n);
}
if(n<60 && n>=45)
{
printf("2nd division n%d",n);
}
if(n<45 && n>=0)
{
printf("F n%d",n);
}
printf("your grade is n%d",n);
getch();
}