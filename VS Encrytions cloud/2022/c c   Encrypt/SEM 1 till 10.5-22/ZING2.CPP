#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,k;
clrscr();
for (i=1;i<15;i++)
{if (i%2!=0)
	{printf("c");}
	else
	{printf("   ");}
}
printf("\n") ;
for (i=1;i<15;i++)
{if (i%2==0)
	{printf("c");}
	else
	{printf("   ");}
}
printf("\n");
for (i=1;i<15;i++)
{if (i%2!=0)
	{printf(" c");}
	else
	{printf("   ");}
}

getch();
}