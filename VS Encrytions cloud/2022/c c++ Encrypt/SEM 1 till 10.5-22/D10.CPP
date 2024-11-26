#include<stdio.h>
#include<conio.h>
void main()
{
//Calculating Simple Intrest
 clrscr();
 float p,r,t,si;
 printf("Enter the principal value=");
 scanf("%f",&p);
 printf("\nEnter time=");
 scanf("%f",&t);
 printf("\nEnter rate=");
 scanf("%f",&r);
 si=(p*r*t)/100;
 printf("\nSimple Intrest is=%f",si);
 getch();
}
