/**
 * @Author: Dastan Alam
 * @Date:   27-03-2022  03:48:47 PM  15:03:64
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 03-04-2022  04:52:00 PM  16:04:04
 */
//WAP print 1 to 100 nutural no......
#include<iostream.h>
#include<conio.h>
void main()
{
	int num,c=0;
	clrscr();
	for(num = 1; num<= 100; num++)
	{       c+=1;
		cout<<num<<"  ";
	      if(c==10)
		{
		cout<<"\n";
		c=0;
		}

	}
	getch();
}