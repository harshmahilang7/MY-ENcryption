#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k;
clrscr();
printf("enter the value n: ");
scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  for (j=1;j<=n-1;j++)
  {
	printf("  ");
  }
  for (k=1;k<=(2*i-1);k++)
  {
	printf("p");
  }
    printf("\n");
 }
getch();
}
