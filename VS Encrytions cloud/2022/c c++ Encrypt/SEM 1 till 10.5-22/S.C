#include<stdio.h>
#include<conio.h>
//void main()
int main()
{int i,j,q,w;
//clrscr();
for(i=1;i<=3;i++)
{
 for(j=1;j<=3;j++)
 {
  if(i==1||(i==3)||j==1)
  {printf("S");}
  else
  {printf(" ");}
 }
printf("\n");
}
for(q=1;q<=2;q++)
 {
 for(w=1;w<=3;w++)
 {if((w==3)||q==2)
 {printf("S");}
 else
 {printf(" ");}
 }
    printf("\n");
 }
 //getch();
}