#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d;
printf("before swapping \n");
printf("enter the value of a=\n");
scanf("%d",&a);
printf("enter the value of b=\n");
scanf("%d",&b);
printf("enter the value of c=\n");
scanf("%d",&c);
printf("enter the value of d=\n");
scanf("%d",&d);
a=a+b+c+d;
d=a-d-c-b;
a=a-b-c-d;
c=a+b+c+d;
b=c-a-b-d;
c=c-a-b-d;
printf("after swapping \n");
printf("the value of a= %d\n",a);
printf("the value of b= %d\n",b);
printf("the value of c= %d\n",c);
printf("the value of d= %d",d);
}