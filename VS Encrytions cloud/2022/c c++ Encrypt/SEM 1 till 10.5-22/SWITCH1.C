#include<stdio.h>
#include<conio.h>
void main()
{
 int c,a,b,ch;
 clrscr();
 printf("Choose the Option:\n");
 printf("1. add\n");
 printf("2. sub\n");
 printf("3. mul\n");
 printf("4. division\n");

 scanf("%d",&ch);
 switch(ch)
 {
  case 1: printf("Enter the 2 num:\n");
	  scanf ("%d%d",&a,&b);
	  c=a+b;
	  printf("the total is %d",c);
	  break;
  case 2: printf("Enter the 2 num:\n");
	  scanf ("%d%d",&a,&b);
	  c=a-b;
	  printf("the total is %d",c);
	  break;
  case 3: printf("Enter the 2 num:\n");
	  scanf ("%d%d",&a,&b);
	  c=a*b;
	  printf("the total is %d",c);
	  break;
  case 4: printf("Enter the 2 num:\n");
	  scanf ("%d%d",&a,&b);
	  c=a/b;
	  printf("the total is %d",c);
	  break;
  default:
	printf("fuck off");
  }
  getch();
  }

