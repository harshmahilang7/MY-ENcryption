#include<stdio.h>
#include<conio.h>
#include<string.h>
//union
union addition
{
 int num1,num2,num3;
 float num4;
}add,a;
int sum(int,int);
void main()
{
 int i,total=0;
 //struct addition add,a;
 clrscr();
 printf("enter the first numbers:");
 scanf("%d",&add.num1);               // 4
 printf("enter the 2nd numbers:");
 scanf("%d",&add.num2);               // 7
 add.num3=sum(add.num1,add.num2);
 printf("%d",add.num1);                //
 getch();
}
int sum (int a,int b)
{
 int c;
 c=a+b;
 return(c);
}




