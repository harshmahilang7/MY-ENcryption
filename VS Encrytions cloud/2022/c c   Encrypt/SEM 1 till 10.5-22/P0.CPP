#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
clrscr();
int p0=1370;
int * p1=&p0;
int ** p2=&p1;
int *** p3=&p2;
int **** p4=&p3;
int ***** p5=&p4;
int ****** p6=&p5;
int ******* p7=&p6;
int ******** p8=&p7;
int ********* p9=&p8;
int ********** pa=&p9;
std:cout <<**********pa;
getch();
return 0;
}
