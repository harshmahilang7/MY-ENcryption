#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("enter the age=");
 scanf("%d",&a);
 if(a>=18)
 {
  printf("you can vote");

 }
 else
 {
  printf("you cant vote");
 }


 getch();
}