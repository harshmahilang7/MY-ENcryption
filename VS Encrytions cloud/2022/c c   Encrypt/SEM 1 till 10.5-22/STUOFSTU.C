#include<stdio.h>
#include<conio.h>
#include<string.h>

//structure of structure
struct score
{
  int marks[6];
  float pert;
};
struct student
{
 int id;
 char name[20];
 struct score s;
};

void main()
{
 int i,total=0;
 struct student stud;
 clrscr();
 printf("enter the student name:");
 scanf("%s",stud.name);
 //printf("Enter the Address:");
 //gets(emp[i].add);
 printf("enter the student id:");
 scanf("%d",&stud.id);
 for(i=0;i<6;i++)
 {
 printf("Enter the student marks of subject %d:",i+1);
 scanf("%d",&stud.s.marks[i]);
 }
 for(i=0;i<6;i++)
 {
 total=total+stud.s.marks[i]; //(given marks/total marks)*100
 }
 stud.s.pert=total/6;

 printf("--***student details ***--\n");
 printf("Id:%d\n",stud.id);
 printf("Name:%s\n",stud.name);
 for(i=0;i<6;i++)
 { printf("subject %d:%d\n",i+1,stud.s.marks[i]);  }
 printf("percentage is .:%f\n",stud.s.pert);
 //printf("Address:%s\n",emp[i].add);
 getch();
}




