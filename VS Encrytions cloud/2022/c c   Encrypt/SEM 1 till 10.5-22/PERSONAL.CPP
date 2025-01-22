#include<stdio.h>
#include<conio.h>
void main()
{
 int d,a;
 clrscr();
 printf("are you HARSH_MAHILANG\n");
 printf("are you DASTAN_ALAM\n");
 scanf("%d",&d);
 switch(d)
 {
 case 1:printf("news \n9 for geting\n8 for nd\n7 for taging\n") ;
	scanf("%d",&a);
	switch(a)
	{
	case 9:printf("bulking") ;
	break;
	case 8:printf("bug") ;
	break;
	case 7:printf("ing") ;
	break;
	default: printf("invalid");
	}
	break;
 case 2: printf("i am satyrmania");
 break;
 default :printf("are you kidding me");
}
getch();
}