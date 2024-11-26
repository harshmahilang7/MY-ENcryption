#include<stdio.h>
#include<conio.h>
#include<snap.h>          // for capture
#include<graphics.h>  //graphics mode

void main()
      {
	  int gdriver = DETECT,gmode;
	    initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

       int i=0;
       char s[20];

	    for(i=0;i<5;i++)
	      {
	      clrscr();

	       printf("\n\n\n\n\t\t\t  Enter your string=>");
		gets(s);

	       capture("C:\\TC\\magic\\pic.jpg");

	    if(s[0]=='e'&&s[1]=='x'&&s[2]=='i'&&s[3]=='t')
		{    break;  }

	     getch();
	 }

}