/**
 * @Author: DASTAN_ALAM
 * @Date:   10-03-2012  Sat 11:37:44 PM  23:37:44
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 09-06-2022  Thu 06:13:48 PM  18:13:48
 */
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\turboc3\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   /* draw the circle */
   circle(midx, midy, radius);

   /* clean up */
   getch();
   closegraph();
   return 0;
}