#include<stdio.h>
#include<conio.h>

// Use of Switch Case
void main()
{
 clrscr();
 int a,b,opt;
 printf("Enter the values");
 scanf("%d%d",&a,&b);
 printf("\nChoose any Option\n");
 printf("1. Sum\n");
 printf("2. Subtraction\n");
 printf("3. Multiplication\n");
 printf("4. Division\n");
 printf("5. Modulus\n");
 scanf("%d",&opt);
 switch(opt)
 {
  case 1:printf("\nSum=%d",a+b);
	 break;
  case 2:printf("\nSubtraction=%d",a-b);
	 break;
  case 3:printf("\nMultiplication=%d",a*b);
	 break;
  case 4:printf("\nDivision=%d",a/b);
	 break;
  case 5:printf("\nModulus=%d",a%b);
	 break;
  default:printf("\nChoose amother Option");
	  break;
 }
 getch();
}