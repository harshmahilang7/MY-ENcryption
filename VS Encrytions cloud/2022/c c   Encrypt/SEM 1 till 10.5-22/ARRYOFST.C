#include<stdio.h>
#include<conio.h>
#include<string.h>
//arry of structure
void main()
{
int i;
struct employee
{
 int id;
 char name[20];
 int sal;
 char phone[15];
 char add[20];
}emp[3];

 clrscr();
 for(i=0;i<3;i++)
 {
 printf("enter the employee name:");
 scanf("%s",emp[i].name);
 //printf("Enter the Address:");
 //gets(emp[i].add);
 printf("enter the Employee id:");
 scanf("%d",&emp[i].id);
 printf("Enter the Employee salary:");
 scanf("%d",&emp[i].sal);
 printf("Enter the employee phone no.:");
 scanf("%s",emp[i].phone);
 }
 for(i=0;i<3;i++)
 {
 printf("--***Employee details of %d***--\n",i+1);
 printf("Id:%d\n",emp[i].id);
 printf("Name:%s\n",emp[i].name);
 printf("salary:%d\n",emp[i].sal);
 printf("Phone no.:%s\n",emp[i].phone);
 //printf("Address:%s\n",emp[i].add);
 }
 getch();
}