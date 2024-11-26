#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
struct employee
{
 int id;
 char name[20];
 float sal;
 char phone[15];
 char add[20];
}emp;
 clrscr();
 printf("enter the employee name:");
 gets(emp.name);
 printf("Enter the Address:");
 gets(emp.add);
 printf("enter the Employee id:");
 scanf("%d",&emp.id);
 printf("Enter the Employee salary:");
 scanf("%f",&emp.sal);
 printf("Enter the employee phone no.:");
 scanf("%s",emp.phone);

 printf("--***Employee details***--\n") ;
 printf("Id:%d\n",emp.id);
 printf("Name:%s\n",emp.name);
 printf("salary:%f\n",emp.sal);
 printf("Phone no.:%s\n",emp.phone);
 printf("Address:%s\n",emp.add);
 getch();
}