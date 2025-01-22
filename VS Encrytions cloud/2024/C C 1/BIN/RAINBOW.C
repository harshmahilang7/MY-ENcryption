/**
 * @Author: Dastan Alam
 * @Date:   03-04-2022  02:07:10 PM  14:04:34
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 05-04-2022  06:53:59 PM  18:04:94
 */
#include<stdio.h>
#include<conio.h>
#include<graphics>
#include<dos.h>
using namespace std;
{
	


void main()
{
int gdriver = DETECT,gmode;
int x,y,i;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(i=30;i<200;i++)
	{
		delay(100);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
getch();
}} // namespace std;