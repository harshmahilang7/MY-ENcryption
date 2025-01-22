#include<stdio.h>
#include<conio.h>

//Use of and & or Operator
void main()
{
 clrscr();
 int a=5,b=5,c=10,d,e;
 d=(a=b)||(c<b);
 e=(a=b)&&(c>b);
 printf("d=%d",d);
 printf("\ne=%d",e);

 getch();
}