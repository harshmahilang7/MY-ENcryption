#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f;
	clrscr();
	print("enter the nos");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	f=a>b?a>c?a>d?a>e?a:e:d>e?d:e:c>d?c>e?c:e:d>e?d:e:b>c?b>d?b>e?b:e:d>e?d:e:c>d?c>e?c:e:d>e?d:e;
	printf("grenter number : %d",f);
	getch();
}
