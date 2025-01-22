#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,s;
clrscr();
printf("enter_1starry\n");
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
   {
   scanf("%d",&a[i][j]);
   }
}
printf("enter_2starry\n");
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
   {
   scanf("%d",&b[i][j]);
   }
}
printf("print_1starry\n");
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
   {
   printf("%d\t",a[i][j]);
   }
   printf("\n");
}
printf("print_2starry\n");
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
   {
 printf("%d\t",b[i][j]);
   }
   printf("\n");
}
printf("asstion arry\n");
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
   {
   c[i][j]=a[i][j]+b[i][j];
 printf("%d\t",c[i][j]);
   }
   printf("\n");
}
/*for(i=0;i<=2;i++)
{
 // s=0;
  for(j=0;j<=2;j++)
  {
 // s=s+a[i][j];
   c[i][j]=a[3][3]+b[3][3];
 printf("\t%d",c[i][j]);
 }
// printf("the sum of horzonotal row = %d\n",s);
}  */
getch();
}
