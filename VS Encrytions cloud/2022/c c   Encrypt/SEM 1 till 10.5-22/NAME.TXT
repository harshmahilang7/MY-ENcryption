 //Program:
#include<conio.h>
#include<graphics.h>
#include<dos.h>

//Animation
void main()
{
 clrscr();
  int gd=DETECT, gm;
  initgraph(&gd, &gm,"C://TurboC3/BGI");

  for(int i=0;i<50;i++){

    settextstyle(3,HORIZ_DIR,4);
    outtextxy(80,150,"DASTAN_ALAM");
    setcolor(RED);
    delay(40);
    cleardevice();
      }
     for(int j=0;j<50;j++){

    settextstyle(3,HORIZ_DIR,4);
    outtextxy(80,150,"DASTAN_ALAM");
    setcolor(WHITE);
    delay(40);
    cleardevice();
     }
     for(int k=0;k<50;k++){

    settextstyle(3,HORIZ_DIR,4);
    outtextxy(80,150,"DASTAN_ALAM");
    setcolor(GREEN);
    delay(40);
    cleardevice();
    }
      for(int p=0;p<50;p++){

    settextstyle(3,HORIZ_DIR,4);
    outtextxy(90,155,"the end ");
    setcolor(GREEN);
    delay(40);
    cleardevice();
    }

for(int l=0;l<50;l++)
{
settextstyle(3,HORIZ_DIR,4);
outtextxy(80,150,"be @deep you want the this code ?");
setcolor(WHITE);
delay(60);
cleardevice();
}
   getch();
  closegraph();
}

