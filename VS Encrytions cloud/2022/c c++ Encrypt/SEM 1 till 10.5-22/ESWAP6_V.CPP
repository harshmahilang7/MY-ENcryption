#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,s;clrscr();
printf("before swapping \n");
printf("enter the value of a=\n");
scanf("%d",&a);
printf("enter the value of b=\n");
scanf("%d",&b);
printf("enter the value of c=\n");
scanf("%d",&c);
printf("enter the value of d=\n");
scanf("%d",&d);
printf("enter the value of e=\n");
scanf("%d",&e);
printf("enter the value of f=\n");
scanf("%d",&f);
s=a;
a=f;
f=s;
s=b;
b=e;
e=s;
s=c;
c=d;
d=s;
printf("after swapping \n");
printf("the value of a= %d\n",a);
printf("the value of b= %d\n",b);
printf("the value of c= %d\n",c);
printf("the value of d= %d\n",d);
printf("the value of e= %d\n",e);
printf("the value of f= %d",f);
getch();
}