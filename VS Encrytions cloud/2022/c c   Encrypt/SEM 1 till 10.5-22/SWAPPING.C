#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("before swapping \n");
printf("enter the value of a=\n");
scanf("%d",&a);
printf("enter the value of b=\n");
scanf("%d",&b);
//a=b-a;
b=b+a;
a=b-a;
b=b-a;
printf("after swapping \n");
printf("the value of a= %d\n",a);
printf("the value of b= %d",b);
getch();
}

