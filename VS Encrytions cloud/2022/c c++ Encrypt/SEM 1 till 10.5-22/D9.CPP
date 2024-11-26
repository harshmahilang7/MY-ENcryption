#include<stdio.h>
#include<conio.h>

// Comparison Of 4 No.s
void main()
{
 clrscr();
 int a,b,c,d;
 printf("Input four no.s\n");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>b)
   {
      if(a>c)
	{
	  if(a>d)
	   {
	    printf("a is greater no.=%d\n",a);
	   }
	}
   }
 else
   {
     if(b>c)
      {
       if(b>d)
	{
	 printf("b is greater no.=%d\n",b);
	}
      }

     else
     {
       if(c>d)
	{
	 printf("c is greater no.=%d\n",c);
	}
       else
	{
	 printf("d is greater no.=%d\n",d);
	}

     }



    }


 printf("Enter any Key!");
 getch();
}