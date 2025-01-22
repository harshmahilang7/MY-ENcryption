#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;clrscr();
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

a=a+b+c+d+e;
e=a-d-c-b-e;
a=a-b-c-d-e;
d=a+b+c+d+e;
b=d-a-b-c-e;
d=d-a-b-c-e;
printf("after swapping \n");
printf("the value of a= %d\n",a);
printf("the value of b= %d\n",b);
printf("the value of c= %d\n",c);
printf("the value of d= %d\n",d);
printf("the value of e= %d",e);
getch();
}