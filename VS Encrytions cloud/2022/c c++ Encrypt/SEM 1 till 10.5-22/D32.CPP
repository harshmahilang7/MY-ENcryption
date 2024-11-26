#include<stdio.h>
#include<conio.h>

// Student Marks(Array)
void main()
{
 int a[10];
 clrscr();
 printf("--**Student Marks Entry**--\n");
 for(int i=0;i<10;i++)
   {
    printf("Enter the marks of student %d=",i+1);
    scanf("%d",&a[i]);
   }
 printf("--**Student Score**--\n");
 for(i=0;i<10;i++)
   {
     printf("Student %d=",i+1);
     printf("%d\n",a[i]);

   }
 getch();
}