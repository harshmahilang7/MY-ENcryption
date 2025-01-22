#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,b[5],c[5];
clrscr();
printf("------------------Array_Addtion-------------------\n");
printf("------------------@HARSH_MAHILANG-------------------\n");
for(i=0;i<=4;i++)
	 {
	 printf("enter the value a[%d]=\n enter the value of b[%d]=\n",i,i);
	 scanf("%d%d",&a[i],&b[i]);
	 }
for(i=0;i<=4;i++)
	{
// printf("the value of a[%d]=%d \n the value of b[%d]=%d\n",i,a[i],i,b[i]);
	c[i]=a[i]+b[i];
	printf("the value of c[%d]= %d\n",i,c[i]);
	}
    getch();
}
