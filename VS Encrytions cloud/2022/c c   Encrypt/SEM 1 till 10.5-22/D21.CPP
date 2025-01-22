#include<stdio.h>
#include<conio.h>

// Factorial
void main()
{
 int n,s=1;
 clrscr();
 printf("Enter the no. to print factorial");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
  s=s*i;
 }
 printf("Factorial=%d",s);

 getch();
}