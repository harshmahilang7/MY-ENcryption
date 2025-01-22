
 //Program:
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>

//Animation
void Helicopter();
void Letters();
void Go();
void Close();

void main()
{
  clrscr();
  int gd=DETECT, gm;
  initgraph(&gd, &gm,"C://TurboC3/BGI");
  //Letters();
 // Go();
  Helicopter();
 // Close();
  getch();
  closegraph();
}
 //For Helicopter
void Helicopter(){
// for(int i=0;i<=450;i++) {


//int b=1; //i;   //Speed of y-axis of helicoptor
//int c=3; //c=i*3;  //Speed of x-axis of helicoptor. It will move twice faster than y a-axis.

// Helicopter
  line(115,247,120,240);                //UpperBackSmallInclinedLine
  line(166,247,161,240);                //UpperFrontSmallInclinedLine
  line(120,240,161,240);                //UpperHorizontallLIne
  line(139,240,139,235);                //SmallBAckVerticalLIne
  line(141,240,141,235);                //SmallFrontVerticalLine
  arc(141,272,140,180,40);                  //BackArc
  arc(140,272,0,40,40);                         //FrontArc
  line(165,248,165,266);                //Glass
  line(165,266,180,266);                //Glass
  rectangle(130,282,150,255);         //Door
  circle(147,268,1);                                //KeyHole
  line(110,247,171,247);                 //MiddleLine
  line(30,275,100,272);                   //backUpperLine
  line(180,273,180,285);                //frontArcVerticalLine
  line(25,285,180,285);                 //BottomBigLine
  line(30,275,20,260);                  //BackEndInclinedLine
  line(20,260,14,260);                  //BackUpperLine
  line(14,260,25,285);                  //LastEndInclinedLine
  circle(18,262,1);			   //BackSmallCircle
// Legs
  line(80,299,167,299);                 //LowerBigLine
  line(80,295,167,295);                 //UpperBigLine
  line(80,295,80,299);                  //BackVerticalLine
  arc(167,279,270,310,20);                  //LowerCurve
  arc(167,275,270,310,20);                  //UpperCurve
  line(180,291,180,293);                //FrontSmallestLine
  line(110,285,110,295);                //StraightLine
  line(113,285,113,295);                //StraightLine
  line(165,285,160,295);                //VerticalLine
  line(163,285,158,295);                //VerticalLine
  //MovingWings
/*  if(i%2==0){
   line(141+c,235-b,75+c,243-b);
   line(141+c,235-b,83+c,258-b);
   line(141+c,235-b,164+c,278-b);
   line(141+c,235-b,99+c,268-b);
   line(141+c,235-b,196+c,243-b);
   line(141+c,235-b,195+c,258-b);
  }
  else{
   line(141+c,235-b,71+c,236-b);
   line(141+c,235-b,79+c,250-b);
   line(141+c,235-b,110+c,278-b);
   line(141+c,235-b,197+c,236-b);
   line(141+c,235-b,196+c,250-b);
   line(141+c,235-b,185+c,267-b);
   line(141+c,235-b,141+c,282-b);
 // }*/
   delay(7554);
  cleardevice();

 }
