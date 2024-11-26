#include<stdio.h>
#include<conio.h>
void main()           // WAP to write the first 5 digit and last 5 digit
{int D,A,S,T,a,N;
clrscr();
printf("entre the no=");
scanf("%d",&D);
printf("enter the last no=");
scanf("%d",&A);
for (S=1;S<6;S++)
  {
  T=D+S;
  printf("first 5 digit is= %d\n",T);
  }
printf("-----------------------\n");
for (a=1;a<6;a++)
  {
  N=A-a;
  printf("last 5 digit is= %d\n",N);
  }
printf("-----------------------\n");
getch();
}
