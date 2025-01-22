#include<stdio.h>
#include<conio.h>
#include<string.h>
//structure and fuction

struct addition
{
 int num1,num2,num3;
};
int sum(int,int);
void main()
{
 int i,total=0;
 struct addition add;
 clrscr();
 printf("enter the first numbers:");
 scanf("%d",&add.num1);
 printf("enter the 2nd numbers:");
 scanf("%d",&add.num2);
 add.num3=sum(add.num1,add.num2);
 printf("%d",add.num3);
 getch();
}
int sum (int a,int b)
{
 int c;
 c=a+b;
 return(c);
}




