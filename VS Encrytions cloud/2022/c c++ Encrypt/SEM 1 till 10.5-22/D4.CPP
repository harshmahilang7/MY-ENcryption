#include<stdio.h>
#include<conio.h>

// Area of Circle
void main()
{
 clrscr();
 float pi=3.14,r,a,p;
 printf("Enter the radius of circle");
 scanf("%f",&r);
 a=pi*r*r;
 p=2*pi*r;
 printf("Area of the circle is=%f\n",a);
 printf("Perimeter of circle=%f\n",p);
 getch();

}