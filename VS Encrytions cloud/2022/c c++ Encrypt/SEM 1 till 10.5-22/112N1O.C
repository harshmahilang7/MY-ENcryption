/**
 * @Author: Dastan_Alam
 * @Date:   23-07-2022 02:17:25 PM       14:17:25
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 09-08-2022 08:53:37 PM       20:53:37
 */
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
  for (j=1;j<=n-i;j++)
  {
	printf(" ");
  }
  for (k=1;k<=(2*i-1);k++)
  {
	printf(" e");
  }
    printf("\n");
 }
getch();
}
