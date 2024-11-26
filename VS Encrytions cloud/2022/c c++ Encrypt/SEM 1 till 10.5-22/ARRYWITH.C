#include<stdio.h>
#include<conio.h>
#include<string.h>
//arry within structure

struct student
{
 int id;
 char name[20];
 int marks[6];
 float per;
}s;

int main()
{
 int i,total=0;
// clrscr();
 printf("enter the student name:");
 scanf("%s",s.name);
 //printf("Enter the Address:");
 //gets(emp[i].add);
 printf("enter the student id:");
 scanf("%d",&s.id);
 for(i=0;i<6;i++)
 {
 printf("Enter the student marks of subject %d:",i+1);
 scanf("%d",&s.marks[i]);
 }
 for(i=0;i<6;i++)
 {
 total=total+s.marks[i]; //(given marks/total marks)*100
 }
 s.per=total/6;
 printf("--***student details of %d***--\n",i+1);
 printf("Id:%d\n",s.id);
 printf("Name:%s\n",s.name);
 for(i=0;i<6;i++)
 { printf("subject %d:%d\n",i+1,s.marks[i]);  }
 printf("percentage is .:%f\n",s.per);
 //printf("Address:%s\n",emp[i].add);
 //getch();
}