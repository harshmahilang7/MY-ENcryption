


 //Program:
#include<conio.h>
#include<graphics.h>
#include<dos.h>



void main()
{
  clrscr();
  int gd=DETECT, gm;
  initgraph(&gd, &gm,"C://TurboC3/BGI");

  line(0,392,900,392);

  getch();
  closegraph();
}


