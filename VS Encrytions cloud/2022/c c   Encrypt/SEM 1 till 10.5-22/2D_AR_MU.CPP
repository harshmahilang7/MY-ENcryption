#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2]={1,2,3,4},i,j,s;
clrscr();
/*for(i=0;i<=1;i++)
{
	for(j=0;j<=1;j++)
		{
		scanf("%d",&a[i][j]);
		}
} */
for(i=0;i<=1;i++)
s=0;
{
  for(j=0;j<=1;j++)
  {
  printf("%d\n",a[i][j]);
  if(i==j)
	{
	s=s+a[i][j];
	printf("%d",s);
	}
  else
	{
	printf("invild");
	}
  }
}


getch();
}
