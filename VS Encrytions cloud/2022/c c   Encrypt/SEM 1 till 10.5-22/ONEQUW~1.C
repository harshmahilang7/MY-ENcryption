#include<stdio.h>
#include<conio.h>
void main()
{
int i=10;
clrscr();
printf("i=%d",i+=(++i*2+i++ ));
getch();
}